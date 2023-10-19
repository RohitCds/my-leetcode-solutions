class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        if (n < 2) return true;  // An array with fewer than 2 elements is considered sorted

        int dropCount = 0;
        for (int i = 1; i < n; ++i) {
            if (nums[i] < nums[i - 1]) {
                ++dropCount;
            }
        }

        // Allow one drop (rotation point) or no drop at all, and check the condition around the rotation point
        return dropCount == 0 || (dropCount == 1 && nums[0] >= nums[n - 1]);
    }
};

