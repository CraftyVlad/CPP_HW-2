#include "function.h"
#include <iostream>

#define INTEGER

using namespace std;

#ifdef INTEGER
void FillArray(int arr[], int size)
for (int i = 0;i < size;i++) {
    arr[i] = rand()
};


    void ShowArray(int arr[], int size)
        for (int i = 0;i < size;i++)
            cout << arr[i] << " ";
    }
    cout << endl;
#endif

#ifdef DOUBLE
    void FillArray(double arr[], int size)
        for (int i = 0;i < size;i++)
            arr[i] = rand()
    }


    void ShowArray(double arr[], int size)
        for (int i = 0;i < size;i++)
            cout << arr[i] << " ";
    }
    cout << endl;

#endif

#ifdef CHAR
    void FillArray(char arr[], int size)
        for (int i = 0;i < size;i++)
            arr[i] = 'a' + rand()
    }


    void ShowArray(char arr[], int size)
        for (int i = 0;i < size;i++)
            cout << arr[i] << " ";
    }
    cout << endl;

#endif

    int main() {
        const int SIZE = 10;
        int arr[SIZE];

        FillArray(arr, SIZE);
        ShowArray(arr, SIZE);

        return 0;
    }