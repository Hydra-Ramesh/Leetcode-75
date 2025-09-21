class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int l = INT_MAX;
        int m = INT_MAX;

        for (int x : nums) {
            if (x <= l) {
                l = x;               // smallest so far
            } else if (x <= m) {
                m = x;               // second smallest
            } else {
                return true;         // found x > m > l
            }
        }

        return false;
    }
};

