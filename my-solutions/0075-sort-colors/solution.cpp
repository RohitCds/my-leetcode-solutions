class Solution {
public:
    void sortColors(vector<int>& nums) {
        list<int> ls;
        for (int x: nums){
            if(x==0){
                ls.push_front(x);
            }
            else if(x==1){
                ls.push_back(x);
            }
        }
        for (int x:nums){
            if(x==2){
                ls.push_back(x);
            }
        }
        int i = 0;
        for (int val : ls) {
            nums[i++] = val;
        }

    }
};
