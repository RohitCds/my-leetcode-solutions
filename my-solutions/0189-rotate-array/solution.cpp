class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k %= n;  // This is important as it avoids unnecessary rotations. 
                 //Also deals with cases where k>n.
        if (k == 0) return;

        for(int i=0; i<k;i++){
            nums.push_back(0);
        }

        int m = nums.size();
        for(int j = m-1; j>=k; j--){
            nums[j] = nums[j-k];
        }
        for(int i=0; i<k;i++){
            nums[i] = nums[n+i];
        }
        nums.resize(n);
    }
};

