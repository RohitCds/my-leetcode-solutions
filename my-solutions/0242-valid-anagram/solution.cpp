#include <string>
#include <vector>

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()) return false;
        unordered_map <char, int> counts;
        for(auto c: s){
            counts[c]+=1;
        }
        for (auto c: t){
            if(counts.find(c)==counts.end()||counts[c]==0) return false;
            counts[c]-=1;
        }
        return true;
    }
};


