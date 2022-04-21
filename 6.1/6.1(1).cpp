#include "6.1.h"
using namespace std;
void sort(int* arr, int size)
{
	int t = 0;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				t = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = t;
			}
		}
	}
}

void print(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "|";
	}
}

void sort(double* arr, int size)
{
	double t = 0;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				t = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = t;
			}
		}
	}
}

void print(double* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "|";
	}
}