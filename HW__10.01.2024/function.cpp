#include "function.h"

#ifdef INTEGER
void FillArray(int arr[], int size) {
	for (int i = 0;i < size;i++) {
		arr[i] = rand();
	}
}


void ShowArray(int arr[], int size) {
	for (int i = 0;i < size;i++)
		cout << arr[i] << " ";

	cout << endl;
}

#endif