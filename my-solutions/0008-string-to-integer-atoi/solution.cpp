#include <string>
#include <climits>
using namespace std;

class Solution {
public:
    int myAtoi(string s) {
        int start = 0;
        while(start<s.length() && s[start] == ' '){
            start++;
        }
        int sign = 1;
        if (start<s.length() && (s[start]=='-' || s[start]=='+')) {
            sign = (s[start]=='-')? -1:1;
            start++;
        }
        long result = 0;
        while(start<s.length() && isdigit(s[start])){
            result = result*10 + (s[start] - '0');
            if (result*sign>INT_MAX) return INT_MAX;
            if (result*sign<INT_MIN) return INT_MIN;
            start++;
        }
        return result*sign;
    }
};


