#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string word;
        string res;
        vector<string> words;

        // Split words by spaces
        while (ss >> word) {
            words.push_back(word);
        }

        int n = words.size();
        for (int i = n - 1; i >= 0; i--) {
            res += words[i];
            if (i != 0) {
                res += " ";
            }
        }

        return res;
    }
};

int main() {
    Solution sol;
    string s;

    cout << "Enter a sentence: ";
    getline(cin, s);

    string result = sol.reverseWords(s);
    cout << "Reversed words: " << result << endl;

    return 0;
}

