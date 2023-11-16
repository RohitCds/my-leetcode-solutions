#include <vector>
#include <climits>

class Solution {
public:
    int smallestDivisor(std::vector<int>& nums, int threshold) {
        int l = 1;
        int r = INT_MAX;

        while (l < r) {
            int divisor = l + (r - l) / 2;
            if (whatisit(nums, threshold, divisor))
                r = divisor;
            else
                l = divisor + 1;
        }

        return l;
    }

    bool whatisit(const std::vector<int>& x, int threshold, int divisor) {
        int y = 0;
        for (int m : x) {
            y += (m + divisor - 1) / divisor; // Corrected to consider ceiling value
        }
        return (y <= threshold);
    }
};

