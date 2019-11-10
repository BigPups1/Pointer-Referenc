#include "Header.h"

void main()
{
	//int a = 2;
	//int b = 3;
	//cout << a << "\t" << b << endl;
	//Exchange(a, b);
	//cout << a << "\t" << b << endl;
	const int n = 5;
	int Arr[n]{ 2,6,99,94,3 };
	cout << *Arr << endl;
	for (int i = 0; i < n; i++)
	{
		cout << *Arr[i] << endl;
	}
}