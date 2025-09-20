#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canPlaceFlowers(vector<int>& nums, int x) {
        int n = nums.size();
        int count = 0;

        for (int i = 0; i < n; i++) {
            if (nums[i] == 0) {
                bool left = (i == 0) || (nums[i - 1] == 0);
                bool right = (i == n - 1) || (nums[i + 1] == 0);

                if (left && right) {
                    nums[i] = 1;  // plant flower
                    count++;
                    if (count >= x) return true;  // early stop
                }
            }
        }
        return count >= x;
    }
};

int main() {
    Solution sol;
    vector<int> flowerbed = {1,0,0,0,1};
    int n = 1;

    bool result = sol.canPlaceFlowers(flowerbed, n);

    cout << (result ? "true" : "false") << endl;
    return 0;
}

