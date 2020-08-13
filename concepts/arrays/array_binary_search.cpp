#include <iostream>
#include <vector>

using namespace std;

//  Binary Search Template I
class BinarySearch {
public:
	int binarySearchI(vector<int>& nums, int target);
};

int BinarySearch::binarySearchI(vector<int>& nums, int target) {
	if (nums.size() == 0)
		return -1;
	int left = 0;
	int right = nums.size() - 1;
	while (left <= right) {
		int mid = left + (right - left) / 2;
		if (nums[mid] == target) return mid;
		else if (nums[mid] < target) {
			left = mid + 1;
		} else {
			right = mid - 1;
		}
	}
	return - 1;
}


int main() {
	BinarySearch bs;
	vector<int> v {1, 3, 4, 7, 10, 15, 20};
	int target = 10;
	cout << bs.binarySearchI(v, target) << endl;
	return 0;
}