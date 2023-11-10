#include <vector>

class Solution {
public:
    int singleNonDuplicate(std::vector<int>& nums) {
        int left = 0;
        int right = nums.size() - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            // Check if the single non-duplicate is found
            if (mid > 0 && nums[mid - 1] != nums[mid] && mid < nums.size() - 1 && nums[mid + 1] != nums[mid]) {
                return nums[mid];
            }

            // Adjust pointers based on the position of the single non-duplicate
            if (mid % 2 == 0) {
                if (mid < nums.size() - 1 && nums[mid] == nums[mid + 1]) {
                    left = mid + 2; // Move to the next pair
                } else {
                    right = mid - 2; // Move to the left half
                }
            } else {
                if (mid > 0 && nums[mid] == nums[mid - 1]) {
                    left = mid + 1; // Move to the right half
                } else {
                    right = mid - 1; // Move to the previous pair
                }
            }
        }

        // If the loop ends, the single non-duplicate is found at the remaining element
        return nums[left];
    }
};


