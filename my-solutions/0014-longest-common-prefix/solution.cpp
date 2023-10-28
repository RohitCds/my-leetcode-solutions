class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.size() == 0) return "";
        string comp = strs[0];
        for (int i = 1; i < strs.size(); i++) {
            while (strs[i].find(comp) != 0) {
                comp = comp.substr(0, comp.length() - 1);
            }
            if (comp.empty()) return "";
        }
        return comp;
    }
};

