#include<iostream>

using namespace std;

int main() {
	//here array is iniliazed that is why all values apart from
	//three {1, 2, 3} have zero values
	int a[10] = { 1, 2, 3 };
	for (int i = 0; i < 10; i++) {
		cout << a[i] << endl;
	}
	//here we have not initlized the array, so values will have
	//garbage values other than 1, 2 and 3;
	int b[11];
	b[0] = 1; b[1] = 2; b[2] = 3;
	for (int i = 0; i < 11; i++) {
		cout << b[i] << endl;
	}

	//we can intialize the value of array values by following too
	int c[5] = { 0 };
	for (int i = 0; i < 5; i++) cout << c[i] << endl;

	//Size of the array (sizeof)
	//if we have an array of integers and int takes four bytes
	//that means four bytes multply by 10 gives sizeof array
	cout << "Size of a : " << sizeof(a) << endl;
	cout << "Size of b : " << sizeof(b) << endl;

	//number of elements in array
	//size of array divide by size of (type of array)
	//so size of array / size of int will give number of elements
	//in array
	int na = sizeof(a) / sizeof(int);
	int nb = sizeof(b) / sizeof(int);
	cout << "number of elements in a " << na << endl;
	cout << "number of elements in b " << nb << endl;
	return 0;
}