class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int res = 0;
        int count = 0;
        
        for(int num : nums){
            if(num == 1){
                count++;
                res = max(res, count);
            } else {
                count = 0;
            }
        }
        
        return res;
    }
};

