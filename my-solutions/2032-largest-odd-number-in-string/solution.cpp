#include <string>

class Solution {
public:
    string largestOddNumber(string num) {
        int n = num.size();

        for (int i = n - 1; i >= 0; i--) {
            if ((num[i] - '0') % 2 == 1) { //The expression num[i] - '0' is used to convert a character representing a digit to its integer value.
                return num.substr(0, i + 1);
            }
        }

        // If no odd digit is found, return an empty string.
        return "";
    }
};

