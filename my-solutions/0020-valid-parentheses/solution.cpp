class Solution {
public:
    bool isValid(string s) {
        int n = s.length();
        stack<char> a;

        for (int i = 0; i < n; i++) {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
                a.push(s[i]);
            }
            if (s[i] == ')') {
                if (!a.empty() && a.top() == '(') {
                    a.pop();
                } else {
                    return false;
                }
            }
            if (s[i] == '}') {
                if (!a.empty() && a.top() == '{') {
                    a.pop();
                } else {
                    return false;
                }
            }
            if (s[i] == ']') {
                if (!a.empty() && a.top() == '[') {
                    a.pop();
                } else {
                    return false;
                }
            }
        }

        return a.size() == 0;
    }
};

