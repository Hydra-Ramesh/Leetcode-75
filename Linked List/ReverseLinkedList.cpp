#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = NULL;
        ListNode* temp = head;
        while (temp != NULL) {
            ListNode* front = temp->next; // save next node
            temp->next = prev;           // reverse pointer
            prev = temp;                 // move prev forward
            temp = front;                // move current forward
        }
        return prev;
    }
};

// Helper to print linked list
void printList(ListNode* head) {
    while (head != NULL) {
        cout << head->val;
        if (head->next) cout << " -> ";
        head = head->next;
    }
    cout << endl;
}

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
    vector<int> arr = {1, 2, 3, 4, 5};
    ListNode* head = createList(arr);

    cout << "Original list: ";
    printList(head);

    Solution sol;
    head = sol.reverseList(head);

    cout << "Reversed list: ";
    printList(head);

    return 0;
}
