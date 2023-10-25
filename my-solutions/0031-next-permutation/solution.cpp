#include <vector>
#include <algorithm>  // For the reverse function
using namespace std;

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int i = nums.size() - 2;
        while (i >= 0 && nums[i] >= nums[i + 1]) {
            i--;
        }

        if (i >= 0) {  // Check whether we found such 'i'
            int m = nums.size() - 1;
            while (m > i) {
                if (nums[m] > nums[i]) {
                    swap(nums[m], nums[i]);
                    break;
                }
                m--;
            }
            reverse(nums.begin() + i + 1, nums.end());
        } else {  // This means the sequence is the last permutation
            reverse(nums.begin(), nums.end());
        }
    }
};

