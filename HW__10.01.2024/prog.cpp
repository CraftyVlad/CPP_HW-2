#include "function.h"

#include <iostream>
int main() {
	const int size = 10;
#ifdef INTEGER
	int arr[size];
	FillArrayInt(arr, size);
	ShowArrayInt(arr, size);
#endif
}