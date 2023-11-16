#include <vector>
#include <algorithm>

class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int low = *max_element(weights.begin(), weights.end());
        int high = accumulate(weights.begin(), weights.end(), 0);

        while (low < high) {
            int mid = low + (high - low) / 2;
            if (canShip(weights, days, mid)) {
                high = mid;
            } else {
                low = mid + 1;
            }
        }

        return low;
    }

private:
    bool canShip(const vector<int>& weights, int days, int capacity) {
        int currentCapacity = 0;
        int requiredDays = 1;

        for (int weight : weights) {
            if (currentCapacity + weight > capacity) {
                currentCapacity = 0;
                requiredDays++;
            }
            currentCapacity += weight;
        }

        return requiredDays <= days;
    }
};

