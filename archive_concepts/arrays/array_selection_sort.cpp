#include<iostream>

using namespace std;
void selection_sort(int arr[], int n) {
	//int n = sizeof(arr) / sizeof(int);
	for (int i = 0; i < n - 1; i++) {
		int min_index = i;
		for (int j = i; j < n; j++) {
			if (arr[j] > arr[min_index]) {
				min_index = j;
			}
		}
		swap(arr[min_index], arr[i]);
	}
}
int main() {
	int arr[] = { 2, 6, 4, 3, 7, 1, 9};
	int n = sizeof(arr) / sizeof(int);
	selection_sort(arr, n);
	for (int i : arr) {
		cout << i << " ";
	}
	cout << endl;
}