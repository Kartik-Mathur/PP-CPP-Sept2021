// PartitionArray.cpp
class Solution {
public:
	int partitionDisjoint(vector<int>& nums) {
		int leftMax[100000], n = nums.size();
		int rightMin[100000];

		leftMax[0] = nums[0];
		int mx = nums[0];
		for (int i = 1 ; i < n ; i++) {
			leftMax[i] = mx;
			mx = max(mx, nums[i]);
		}

		int mi = nums[n - 1];
		rightMin[n - 1] = nums[n - 1];

		for (int i = n - 2; i >= 0; i--) {
			rightMin[i] = mi;
			mi = min(mi, nums[i]);
		}

		for (int i = 0 ; i < n ; i++) {
			if (leftMax[i] <= rightMin[i]) {
				return i + 1;
			}
		}

		return -1;
	}
};