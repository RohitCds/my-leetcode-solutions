class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        int start = 0;

        // Reverse the entire string.
        reverse(s.begin(), s.end());

        for (int i = 0; i < n; i++) {
            if (s[i] != ' ' || (i > 0 && s[i - 1] != ' ')) {
                if (start != 0) {
                    s[start++] = ' ';
                }
                int end = i;
                while (end < n && s[end] != ' ') {
                    s[start++] = s[end++];
                }
                reverse(s.begin() + start - (end - i), s.begin() + start);
                i = end;
            }
        }

        s.resize(start);

        return s;
    }
};


