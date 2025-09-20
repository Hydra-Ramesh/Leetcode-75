#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        // If concatenations don't match, no common divisor string exists
        if (str1 + str2 != str2 + str1) {
            return "";
        }
        int strLen = gcd((int)str1.length(), (int)str2.length());
        return str1.substr(0, strLen);
    }
};

int main() {
    Solution sol;

    string str1 = "ABCABC";
    string str2 = "ABC";

    string result = sol.gcdOfStrings(str1, str2);

    cout << "GCD of strings: " << result << endl;

    return 0;
}

