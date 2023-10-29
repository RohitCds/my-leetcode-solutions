class Solution {
public:
    string frequencySort(string s) {
        string res;
        unordered_map<char, int> counts;
        for (char c : s) {
            counts[c]++;
        }

        vector<pair<char, int>> charCountVector;
        
        for (const auto& count : counts) {
            charCountVector.emplace_back(count.first, count.second);
        }
        
        sort(charCountVector.begin(), charCountVector.end(), [](const pair<char, int>& a, const pair<char, int>& b) {
            return a.second > b.second;
        });
        //[](const pair<char, int>& a, const pair<char, int>& b) { return a.second > b.second; }: This is a lambda function or a custom comparison function that defines the sorting criteria. It takes two pairs of characters and their frequencies (a and b) as arguments and compares them based on the second element of the pair, which is the frequency.
        
        for (const auto& charCount : charCountVector) {
            res.append(charCount.second, charCount.first);
        }
        
        return res;
    }
};

