#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <algorithm>
using namespace std;

template <typename T>
class Matrix {
private:
    vector<vector<T>> data;
    int rows;
    int cols;

public:
    Matrix(int rows, int cols) : rows(rows), cols(cols) {
        data.resize(rows);
        for (int i = 0; i < rows; i++) {
            data[i].resize(cols);
        }
    }

    void fillWithUserInput() {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cout << "Enter the [" << i << "]" << "[" << j << "] element: ";
                cin >> data[i][j];
            }
        }
    }

    void printMatrix() {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cout << data[i][j] << " ";
            }
            cout << "\n";
        }
        cout << "\n";
    }

    Matrix operator+(const Matrix& right) {
        if (rows != right.rows || cols != right.cols) {
            cerr << "Matrix dimensions don't match for addition!" << endl;
            return Matrix(0, 0);
        }

        Matrix result(rows, cols);
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                result.data[i][j] = data[i][j] + right.data[i][j];
            }
        }
        return result;
    }

    Matrix operator-(const Matrix& right) {
        if (rows != right.rows || cols != right.cols) {
            cerr << "Matrix dimensions don't match for subtraction!" << endl;
            return Matrix(0, 0);
        }

        Matrix result(rows, cols);
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                result.data[i][j] = data[i][j] - right.data[i][j];
            }
        }
        return result;
    }

    Matrix operator*(const Matrix& right) {
        if (cols != right.rows) {
            cerr << "Matrix dimensions are not compatible for multiplication/division!" << endl;
            return Matrix(0, 0);
        }

        Matrix result(rows, right.cols);
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < right.cols; j++) {
                result.data[i][j] = 0;
                for (int k = 0; k < cols; k++) {
                    result.data[i][j] += data[i][k] * right.data[k][j];
                }
            }
        }
        return result;
    }

};

int main() {

    srand(static_cast<unsigned>(time(nullptr)));

    Matrix<int> mat1(2, 3);
    mat1.fillWithUserInput();
    cout << "Matrix 1:" << endl;
    mat1.printMatrix();

    Matrix<int> mat2(2, 3);
    mat2.fillWithUserInput();
    cout << "Matrix 2:" << endl;
    mat2.printMatrix();

    return 0;
}
