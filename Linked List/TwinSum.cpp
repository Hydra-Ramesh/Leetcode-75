#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    int pairSum(ListNode* head) {
        vector<int> res;
        while (head) {
            res.push_back(head->val);
            head = head->next;
        }
        int maxSum = 0;
        int n = res.size();
        for (int i = 0; i < n / 2; i++) {
            int sum = res[i] + res[n - i - 1];
            maxSum = max(maxSum, sum);
        }
        return maxSum;
    }
};

// Helper to create linked list from vector
ListNode* createList(vector<int> arr) {
    if (arr.empty()) return nullptr;
    ListNode* head = new ListNode(arr[0]);
    ListNode* curr = head;
    for (int i = 1; i < arr.size(); i++) {
        curr->next = new ListNode(arr[i]);
        curr = curr->next;
    }
    return head;
}

int main() {
    vector<int> arr = {5, 4, 2, 1};  // Example input
    ListNode* head = createList(arr);

    Solution sol;
    cout << "Maximum Twin Sum: " << sol.pairSum(head) << endl;

    return 0;
}
