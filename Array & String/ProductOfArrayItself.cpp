#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> res(nums.size(), 1);

        int l = 1;
        for (int i = 0; i < nums.size(); i++) {
            res[i] *= l;     // store product of elements to the left
            l *= nums[i];
        }

        int r = 1;
        for (int i = nums.size() - 1; i >= 0; i--) {
            res[i] *= r;     // multiply by product of elements to the right
            r *= nums[i];
        }

        return res;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 2, 3, 4};

    vector<int> result = sol.productExceptSelf(nums);

    cout << "Result: ";
    for (int x : result) cout << x << " ";
    cout << endl;

    return 0;
}

