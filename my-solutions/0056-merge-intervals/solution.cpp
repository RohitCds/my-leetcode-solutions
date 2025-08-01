class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if(intervals.empty()) return {};
        int n = intervals.size();
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> ans;
        ans.push_back(intervals[0]); // Start with first interval
        int i = 1;
        while(i < intervals.size()) {
            // Get the last interval in our result
            vector<int>& lastInterval = ans.back();
            
            // Check if current interval overlaps with the last one
            if(intervals[i][0] <= lastInterval[1]) {
                // Merge: extend the end time to the maximum
                lastInterval[1] = max(lastInterval[1], intervals[i][1]);
                
            } else {
                // No overlap: add as new interval
                ans.push_back(intervals[i]);
            }
            i++;
        }
        
        return ans;
    }
};

