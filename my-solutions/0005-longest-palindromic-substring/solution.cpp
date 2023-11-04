class Solution {
public:
    string longestPalindrome(string s) {
        int start = 0;
        int maxlen = 1;
        for(int i = 0; i< s.length(); i++){
            int len1 = expansion(s,i,i);
            int len2 = expansion(s, i, i+1);
            int len = max(len1, len2);
            if(maxlen<len){
                maxlen = len;
                start = i-((maxlen-1)/2);
            }
        }
        return s.substr(start, maxlen);
    }
    int expansion(string str, int left, int right){
        while((left>=0)&&(right<str.length())&&(str[left]==str[right])){
            left--;
            right++;
        }
        return right-left-1;
    }
};
