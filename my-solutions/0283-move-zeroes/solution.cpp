class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int sp = n+1;
        if(n!=1){
            for(int i=0; i<n; i++){
                if(nums[i]==0){
                    sp = i;
                    break;
                }
            }
            if(sp<n){
                for (int i = sp; i<n; i++){
                    if(nums[i]!=0){
                        nums[sp]=nums[i];
                        nums[i]=0;
                        sp+=1;
                    }
                }
            }
        }
    }
};



