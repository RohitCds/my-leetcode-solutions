class Solution {

    int charToVal(char c) {
        switch (c) {
            case 'M': return 1000;
            case 'D': return 500;
            case 'C': return 100;
            case 'L': return 50;
            case 'X': return 10;
            case 'V': return 5;
            case 'I': return 1;
        }
        assert(false);  
    }

public:
    int romanToInt(string s) {
        int res = 0;
        for (int i = 0; i < s.length(); ++i) {
            if (i + 1 < s.length() && charToVal(s[i]) < charToVal(s[i+1])) {
                res -= charToVal(s[i]) ;
            } else {
                res += charToVal(s[i]) ;
            }
        }
        return res;
    }
};

