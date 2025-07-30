class Solution {
public:
    void getPerms(vector<int>& nums, int indx, vector<vector<int>>& ans, int n){
        if(indx>=n){
            ans.push_back(nums);
            return;
        }
        for(int i=indx; i<n;i++){
            swap(nums[indx], nums[i]);
            getPerms(nums, indx+1, ans, n);
            swap(nums[indx], nums[i]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        int n = nums.size();
        if(nums.size()==1){return {nums};}
        vector<vector<int>> ans;
        int indx = 0;
        getPerms(nums, indx, ans, n);
        return ans;
    }
};
