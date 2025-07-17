class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";

        vector<char> a(strs[0].begin(), strs[0].end());  // copy first string

        for (int i = 1; i < strs.size(); i++) {
            int minLen = min(a.size(), strs[i].size());
            for (int j = 0; j < minLen; j++) {
                if (strs[i][j] != a[j]) {
                    a.erase(a.begin() + j, a.end());
                    break;
                }
            }
            if (strs[i].size() < a.size()) {
                a.erase(a.begin() + strs[i].size(), a.end());
            }
        }

        return string(a.begin(), a.end());
    }
};

