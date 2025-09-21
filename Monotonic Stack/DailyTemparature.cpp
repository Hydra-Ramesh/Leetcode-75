#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int> result(n, 0);
        stack<int> indices;  // stores indices of unresolved temperatures

        for (int currentDay = 0; currentDay < n; currentDay++) {
            // Resolve all previous days that are colder than current
            while (!indices.empty() && temperatures[currentDay] > temperatures[indices.top()]) {
                int previousDay = indices.top();
                indices.pop();
                result[previousDay] = currentDay - previousDay;
            }
            indices.push(currentDay);
        }

        return result;
    }
};

int main() {
    Solution sol;
    vector<int> temperatures = {73, 74, 75, 71, 69, 72, 76, 73};

    vector<int> result = sol.dailyTemperatures(temperatures);

    cout << "Days to wait for warmer temperature: ";
    for (int days : result) {
        cout << days << " ";
    }
    cout << endl;

    return 0;
}
