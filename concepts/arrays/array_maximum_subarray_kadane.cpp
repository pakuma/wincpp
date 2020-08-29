#include<iostream>

using namespace std;
//Kadane's Algorithm
int main() {
	int arr[] = { -4, 1, 3, -2, 16, 2, -8, -9, 4};
	int n = sizeof(arr) / sizeof(int);

	int maxSum = arr[0];
	int currSum = arr[0];

	for (int i = 1; i < n; i++) {
		currSum = max(arr[i], arr[i] + currSum);
		maxSum = max(currSum, maxSum);
	}
	cout << "Maximum Sum : " << maxSum << "\n";
}