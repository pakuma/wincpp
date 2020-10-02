#include<iostream>

//Brute Force Approach
using namespace std;

int main() {
	int arr[] = { -4, 1, 3, -2, 6, 2, -8, -9, 4};
	int n = sizeof(arr) / sizeof(int);

	int left = -1;
	int right = -1;

	int maximumSum = 0;

	for (int i = 0; i < n; i++) {
		for (int j = i; j < n; j++) {
			int currentSum = 0;
			for (int k = i; k <= j; k++) {
				currentSum += arr[k];
			}
			if (currentSum > maximumSum) {
				maximumSum = currentSum;
				left = i;
				right = j;
			}
		}
	}
	cout << "maximumSum Subarray is ";
	for (int i = left; i <= right; i++) {
		cout << arr[i] << ", ";
	}
	cout << "\n";
	cout << "maximumSum is " << maximumSum << endl;
}