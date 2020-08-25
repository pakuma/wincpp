#include<iostream>

using namespace std;

bool compare(int a, int b) {
	cout << "Compare " << a << " with " << b << endl;
	return a > b;
}

void bubble_sort(int arr[], int n, bool(&comparator)(int a, int b)) {
	for (int i = 1; i < n; i++) {
		for (int j = 0; j < (n - i); j++) {
			if (comparator(arr[j] , arr[j + 1])) {
				swap(arr[j], arr[j + 1]);
			}
		}
	}
}

int main() {
	int arr[] = { 2, 6, 4, 3, 7, 1, 9};
	int n = sizeof(arr) / sizeof(int);
	bubble_sort(arr, n, compare);
	for (int i : arr) {
		cout << i << " ";
	}
	cout << endl;
	return 0;
}