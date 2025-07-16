class Solution {
public:
    string longestPalindrome(string s) {
        int maxlength = 0;
        int start = 0;
        for (int i =0; i<s.length(); i++){
            expandfromcenter(s, i, i, start, maxlength);
            expandfromcenter(s, i, i+1, start, maxlength);
        }
        return s.substr(start, maxlength);
    }

private:
    void expandfromcenter(const string& a, int left, int right, int& s, int& m){
        while(left>=0 && right <a.length() && a[left]==a[right]){
            if (right-left+1 > m){
                m = right - left + 1;
                s = left;
            }
            left--;
            right++;
        }
    }

};
