#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> ans;
        int maxi = INT_MIN;

        // Find maximum candy count
        for (int i = 0; i < candies.size(); i++) {
            maxi = max(maxi, candies[i]);
        }

        // Check each kid
        for (int i = 0; i < candies.size(); i++) {
            if (candies[i] + extraCandies >= maxi) {
                ans.push_back(true);
            } else {
                ans.push_back(false);
            }
        }

        return ans;
    }
};

int main() {
    Solution sol;
    vector<int> candies = {2, 3, 5, 1, 3};
    int extraCandies = 3;

    vector<bool> result = sol.kidsWithCandies(candies, extraCandies);

    cout << "Result: ";
    for (bool b : result) {
        cout << (b ? "true " : "false ");
    }
    cout << endl;

    return 0;
}

