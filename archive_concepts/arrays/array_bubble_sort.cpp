#include<iostream>

using namespace std;

void bubble_sort(int arr[], int n) {
	for (int i = 1; i < n; i++) {
		for (int j = 0; j < (n - i); j++) {
			if (arr[j] > arr[j + 1]) {
				swap(arr[j], arr[j + 1]);
			}
		}
	}
}

int main() {
	int arr[] = { 2, 6, 4, 3, 7, 1, 9};
	int n = sizeof(arr) / sizeof(int);
	bubble_sort(arr, n);
	for (int i : arr) {
		cout << i << " ";
	}
	cout << endl;
	return 0;
}