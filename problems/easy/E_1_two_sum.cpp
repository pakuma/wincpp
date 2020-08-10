#include<iostream>
#include<unordered_map>
#include<vector>

using namespace std;

class TwoSum {
public:
	vector<int> twoSum(vector<int>& nums, int target) {
		unordered_map<int, int> m;
		vector<int> result;
		for (int i = 0; i < nums.size(); i++) {
			int complement = target - nums[i];
			if (m.find(complement) != m.end()) {
				result.push_back(m.at(complement));
				result.push_back(i);
				break;
			}
			m[nums[i]] = i;
		}
		return result;
	}
};

int main() {
	vector<int> v {2, 7, 11, 15};
	int target = 9;
	TwoSum t;
	vector<int> out = t.twoSum(v, target);
	for (int i = 0; i < out.size(); i++) {
		cout << out[i] << endl;
	}
}