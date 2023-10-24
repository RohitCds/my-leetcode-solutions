//for a time complexity wise optimised approach we will be using kadane's algorithm

class Solution {
public:
    int maxSubArray(std::vector<int>& arr) {
        int n = arr.size();
        int currentsum=arr[0];
        int maxsum = arr[0];
        for(int i = 1; i<n; i++){
            currentsum = max(currentsum+arr[i], arr[i]);
            maxsum = max(currentsum, maxsum);
        }
        return maxsum;
    }

};

