#include<iostream>
#include<climits>

using namespace std;
int main() {
	int smallest = INT_MAX;
	int largest = INT_MIN;

	cout << "INT_MIN :" << INT_MIN << " INT_MAX : " << INT_MAX << endl;
	int a[12] = {11, 4, 7, 3, 5, 10, 33, 45, 22, 44, 77, 66};
	int n = sizeof(a) / sizeof(int);
	//Method# 1
	for (int i = 0; i < n; i++) {
		if (a[i] > largest) {
			largest = a[i];
		}
		if (a[i] < smallest) {
			smallest = a[i];
		}
	}
	//Method#2 (using inbuilt min and max funtions)
	for (int i = 0; i < n; i++) {
		largest = max(largest, a[i]);
		smallest = min(smallest, a[i]);
	}

	cout << "smallest : " << smallest;
	cout << " largest : " << largest << endl;

}