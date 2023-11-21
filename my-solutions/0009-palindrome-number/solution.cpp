class Solution {
public:
    bool isPalindrome(int x) {
        string str = to_string(x);
        return str == string(str.rbegin(), str.rend());
    }
};
