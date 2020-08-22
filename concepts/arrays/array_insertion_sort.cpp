#include<iostream>

using namespace std;

void insertion_sort(int arr[], int n) {
	for (int i = 1; i < n - 1; i++) {
		int current = arr[i];

		int j = i - 1;
		while (j >= 0 && arr[j] > current) {
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = current;
	}
}

int main() {
	int arr[] = { 2, 6, 4, 3, 7, 1, 9};
	int n = sizeof(arr) / sizeof(int);
	insertion_sort(arr, n);
	for (int i : arr) {
		cout << i << " ";
	}
	cout << endl;
	return 0;
}