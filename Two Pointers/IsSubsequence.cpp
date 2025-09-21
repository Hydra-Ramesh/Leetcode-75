#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0;
        int j = 0;
        while (i < s.size() && j < t.size()) {
            if (s[i] == t[j]) {
                i++;
            }
            j++;
        }
        return i == s.size();
    }
};

int main() {
    Solution sol;

    string s1 = "abc", t1 = "ahbgdc";
    cout << s1 << " in " << t1 << " -> " 
         << (sol.isSubsequence(s1, t1) ? "true" : "false") << endl;

    string s2 = "axc", t2 = "ahbgdc";
    cout << s2 << " in " << t2 << " -> " 
         << (sol.isSubsequence(s2, t2) ? "true" : "false") << endl;

    return 0;
}

