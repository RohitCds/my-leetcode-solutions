class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;
        for (int i = 0; i < nums.size(); i++){
            if(i>0 && nums[i] == nums[i-1]) continue;
            int left = i+1;
            int right = nums.size()-1;
            while(left<right){
                if ((nums[i] +nums[left] + nums[right]) == 0){
                    res.push_back({nums[i], nums[left], nums[right]});
                    while(left<right&&nums[left+1]==nums[left]) left++;
                    while(left<right&&nums[right-1]==nums[right]) right--;
                    left++;
                    right--;
                } else if ((nums[i] +nums[left] + nums[right]) > 0){
                    while(left<right&&nums[right-1]==nums[right]) right--;
                    right--;
                } else {
                    while(left<right&&nums[left+1]==nums[left]) left++;
                    left++;
                }
            }
        }
        return res;
    }
};
