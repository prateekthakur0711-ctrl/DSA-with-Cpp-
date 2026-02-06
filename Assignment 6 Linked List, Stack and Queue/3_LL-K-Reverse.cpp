#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;

    ListNode(int x) {
        val = x;
        next = NULL;
    }
};

class Solution {
public:
    int lengthLL(ListNode* h) {
        int cnt = 0;
        while (h != NULL) {
            cnt++;
            h = h->next;
        }
        return cnt;
    }

    // Reverse entire linked list starting from head
    ListNode* reverseLL(ListNode* head) {
        ListNode* curr = head;
        ListNode* prev = NULL;

        while (curr != NULL) {
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }

    ListNode* reverseKGroup(ListNode* head, int k) {
        if (!head || k == 1) return head;

        ListNode* dummy = new ListNode(-1);
        dummy->next = head;

        ListNode* prev = dummy;
        int remaining_len = lengthLL(head);

        while (remaining_len >= k) {
            // Find tail of k-group
            ListNode* tail = head;
            for (int i = 1; i < k; i++) {
                tail = tail->next;
            }

            ListNode* nextGroup = tail->next;
            tail->next = NULL;        // detach k-group

            // Reverse k-group
            ListNode* newHead = reverseLL(head);

            // Reconnect
            prev->next = newHead;
            head->next = nextGroup;

            // Move pointers
            prev = head;
            head = nextGroup;

            remaining_len -= k;
        }

        return dummy->next;
    }
};

int main() {
    int N, K;
    cin >> N >> K;

    if (N == 0) return 0;

    int x;
    cin >> x;
    ListNode* head = new ListNode(x);
    ListNode* temp = head;

    for (int i = 1; i < N; i++) {
        cin >> x;
        temp->next = new ListNode(x);
        temp = temp->next;
    }

    Solution sol;
    head = sol.reverseKGroup(head, K);

    // Print result
    while (head != NULL) {
        cout << head->val << " ";
        head = head->next;
    }

    return 0;
}
