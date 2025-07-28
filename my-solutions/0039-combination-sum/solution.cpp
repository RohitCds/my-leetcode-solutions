class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        combosums(0, candidates, target, ans, ds);
        return ans;
    }
public: 
    void combosums(int a, vector<int>& candidates, int target, vector<vector<int>>& ans, vector<int>& ds){
        if(target==0){
            ans.push_back(ds);
            return;
        }
        if(a >= candidates.size()){
            return;
        }
        if(candidates[a]<=target){
            ds.push_back(candidates[a]);
            combosums(a, candidates, target-candidates[a], ans, ds);
            ds.pop_back();
        }
        combosums(a+1, candidates, target, ans, ds);
    }
};
