class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> freq;

        // Counting occurrences
        for (int x : nums) {
            freq[x]++;
        }

        // Finding the single number
        for (auto it : freq) {
            if (it.second == 1) {
                return it.first;
            }
        }

        // This return is just to satisfy all control paths. 
        // Ideally, the code shouldn't reach here.
        return -1;
    }
};


