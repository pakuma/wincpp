#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int arr[] = {4, 8, 5, 7, 9, 1, 3, 2};
	int n = sizeof(arr) / sizeof(int);

	for (int i = 0; i < n; i++) {
		cout << arr[i] << ",";
	}
	cout << endl;
	cout << n << endl;

	sort(arr, arr + n);

	for (int i = 0; i < n; i++) {
		cout << arr[i] << ",";
	}

}