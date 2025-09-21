#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int i = 0, j = nums.size() - 1;
        int count = 0;

        while(i < j) {
            int sum = nums[i] + nums[j];
            if(sum == k) {
                count++;
                i++;
                j--;
            } else if(sum < k) {
                i++;
            } else {
                j--;
            }
        }
        return count;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1,2,3,4};
    int k = 5;

    int result = sol.maxOperations(nums, k);
    cout << "Max number of k-sum pairs: " << result << endl;

    return 0;
}

