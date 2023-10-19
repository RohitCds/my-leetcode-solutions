class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int total = n*(n+1)/2;
        int sums = 0;
        for(int x:nums){
            sums+=x;
        }
        return total-sums;
    }
};
