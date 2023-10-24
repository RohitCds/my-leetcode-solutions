class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> pums(n);
        int evenIndex = 0;
        int oddIndex = 1;
        for(int num: nums){
            if(num>=0){
                pums[evenIndex]=num;
                evenIndex+=2;
            } else {
                pums[oddIndex]= num;
                oddIndex+=2;
            }
        }
        return pums;
    }
}; // Close the class definition


