#include "6.1.h"

int main()
{
	using namespace std;
	int const size = 10;
	int arr1[size]{9, 6, 5, 8, 3, 7, 0, 4, 1, 2};
	double arr2[size]{21.5, 41.7, 14.9, 17.1, 25.4, 13.4, 16.2, 35.8, 12.6, 18.5};

	cout << "int: " << endl;
	print(arr1, size);
	sort(arr1, size);
	cout << endl;
	print(arr1, size);
	cout << endl;
	cout << "double: " << endl;
	print(arr2, size);
	cout << endl;
	sort(arr2, size);
	print(arr2, size);
}
