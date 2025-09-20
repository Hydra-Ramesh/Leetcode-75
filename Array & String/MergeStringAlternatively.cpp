#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string s;
        int maxL = max(word1.length(), word2.length());
        for (int i = 0; i < maxL; i++) {
            if (i < word1.length()) {
                s += word1[i];
            }
            if (i < word2.length()) {
                s += word2[i];
            }
        }
        return s;
    }
};

int main() {
    Solution sol;

    string word1 = "abc";
    string word2 = "pqr";

    string result = sol.mergeAlternately(word1, word2);

    cout << "Merged string: " << result << endl;

    return 0;
}

