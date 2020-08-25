#include <iostream>
#include <algorithm>

using namespace std;

//Define A Comparator Function
bool compare(int a, int b) {
	//let's check hot many time this compare function is called in sort function
	cout << "Compare : " << a << " and " << b << endl;
	return a > b;
}

int main() {
	int arr[] = {4, 8, 5, 7, 9, 1, 3, 2};
	int n = sizeof(arr) / sizeof(int);

	for (int i = 0; i < n; i++) {
		cout << arr[i] << ",";
	}
	cout << endl;
	cout << n << endl;

	//Simple Sort -- increasing order
	sort(arr, arr + n);

	for (int i = 0; i < n; i++) {
		cout << arr[i] << ",";
	}
	cout << endl;
	//Sort using compare function -- decreasing order
	sort(arr, arr + n, compare);
	for (int i = 0; i < n; i++) {
		cout << arr[i] << ",";
	}

}