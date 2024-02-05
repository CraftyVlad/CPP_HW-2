#define INTEGER

#pragma once
#include <iostream>
using namespace std;


#ifdef INTEGER
void FillArray(int arr[], int size);
void ShowArray(int arr[], int size);
#define FillArrayInt FillArray
#define ShowArrayInt ShowArray
#endif

#ifdef DOUBLE
void FillArray(double arr[], int size);
void ShowArray(double arr[], int size);
#endif

#ifdef CHAR
void FillArray(char arr[], int size);
void ShowArray(char arr[], int size);
#endif