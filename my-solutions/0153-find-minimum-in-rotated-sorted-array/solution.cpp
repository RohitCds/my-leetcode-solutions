class Solution {
public:
    int findMin(std::vector<int>& nums) {
        int left = 0;
        int right = nums.size() - 1;

        while (left < right) {
            int mid = left + (right - left) / 2;

            // Check if the right half is sorted
            if (nums[right] <= nums[mid]) {
                left = mid + 1;
            }
            // Check if the left half is sorted
            else if (nums[left] <= nums[mid]) {
                right = mid-1;
            }
            // Handle the case where nums[mid] is the minimum
            else {
                right = mid;
            }
        }

        return nums[left];
    }
};

