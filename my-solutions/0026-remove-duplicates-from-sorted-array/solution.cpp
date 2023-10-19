class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0;  // handle empty vector
        int writeIndex = 1;  // index to write the next unique value
        for (int readIndex = 1; readIndex < nums.size(); ++readIndex) {
            if (nums[readIndex] != nums[readIndex - 1]) {
                nums[writeIndex] = nums[readIndex];
                ++writeIndex;
            }
        }
        nums.resize(writeIndex);  // shrink the vector to the new size
        return writeIndex;
    }
};

