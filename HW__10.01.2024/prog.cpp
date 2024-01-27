#define INTEGER
//#define DOUBLE
//#define CHAR

#ifdef INTEGER
#define FillArray  FillArrayInt
#define ShowArray  ShowArrayInt
#endif

#ifdef DOUBLE
#define FillArray  FillArrayDouble
#define ShowArray  ShowArrayDouble
#endif

#ifdef CHAR
#define FillArray  FillArrayChar
#define ShowArray  ShowArrayChar
#endif

#include "function.h"

int main() {
	const int size = 10;
#ifdef INTEGER
	int arr[size];
	FillArray(arr, size);
	ShowArray(arr, size);
#endif

#ifdef DOUBLE
	double arr[size];
	FillArray(arr, size);
	ShowArray(arr, size);
#endif

#ifdef CHAR
	char arr[size];
	FillArray(arr, size);
	ShowArray(arr, size);
#endif

	return 0;
}