class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hashMap;  // key: number, value: index
        vector<int> result;
        for (int i = 0; i < nums.size(); ++i) {
            int complement = target - nums[i];
            if (hashMap.find(complement) != hashMap.end()) {
                result.push_back(hashMap[complement]);
                result.push_back(i);
                return result;
            }
            hashMap[nums[i]] = i;
        }
        return result;  // return an empty vector if no solution is found
    }
};

