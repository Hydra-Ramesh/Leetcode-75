#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        int len = 0;
        int i = 0;

        while (i < n) {
            char curr = chars[i];
            int count = 0;

            // Count duplicates
            while (i < n && chars[i] == curr) {
                i++;
                count++;
            }

            // Write character
            chars[len++] = curr;

            // Write count if > 1
            if (count > 1) {
                string str = to_string(count);
                for (char c : str) {
                    chars[len++] = c;
                }
            }
        }
        return len;
    }
};

int main() {
    Solution sol;
    vector<char> chars = {'a','a','b','b','c','c','c'};

    int newLen = sol.compress(chars);

    cout << "Compressed length: " << newLen << endl;
    cout << "Compressed array: ";
    for (int i = 0; i < newLen; i++) {
        cout << chars[i] << " ";
    }
    cout << endl;

    return 0;
}

