#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string reverseVowels(string s) {
        int i = 0;
        int j = s.length() - 1;

        auto isVowel = [](char c) {
            c = tolower(c);
            return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
        };

        while (i < j) {
            if (!isVowel(s[i])) {
                i++;
                continue;
            }
            if (!isVowel(s[j])) {
                j--;
                continue;
            }
            // Swap vowels
            swap(s[i], s[j]);
            i++;
            j--;
        }

        return s;
    }
};

int main() {
    Solution sol;
    string s;

    cout << "Enter a string: ";
    getline(cin, s);  // take input string

    string result = sol.reverseVowels(s);
    cout << "Reversed vowels: " << result << endl;

    return 0;
}

