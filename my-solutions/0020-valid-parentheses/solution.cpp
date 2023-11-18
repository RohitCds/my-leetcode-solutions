#include <iostream>
#include <stack>
#include <unordered_map>

class Solution {
public:
    bool isValid(std::string s) {
        std::stack<char> brackets;
        std::unordered_map<char, char> bracketPairs = {
            {')', '('},
            {'}', '{'},
            {']', '['}
        };

        for (char c : s) {
            if (bracketPairs.find(c) != bracketPairs.end()) {
                // Current character is a closing bracket
                char topElement = brackets.empty() ? '#' : brackets.top();
                brackets.pop();
                if (topElement != bracketPairs[c]) {
                    return false;
                }
            } else {
                // Current character is an opening bracket
                brackets.push(c);
            }
        }

        // The string is valid if the stack is empty at the end
        return brackets.empty();
    }
};
