class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map <char, int> umap;
        int maxLength = 0;
        int start = 0;
        for (int i = 0; i<s.size(); i++){
            char ch = s[i];
            if(umap.count(ch) && umap[ch] >= start){
                start = umap[ch]+1;
            }
            umap[ch] = i;
            maxLength = max(maxLength, i-start+1);
        }
        return maxLength;
    }
};
