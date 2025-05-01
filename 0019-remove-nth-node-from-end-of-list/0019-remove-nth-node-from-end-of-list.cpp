/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int length = 0;
        ListNode* temp = head;

        // Step 1: Count the total number of nodes
        while (temp != nullptr) {
            length++;
            temp = temp->next;
        }

        //to remove head in case of lenght 1
        if (n == length) {
            return head->next;
        }

        //moving to just before n(jump)
        temp = head;
        for (int i = 1; i < length - n; i++) {
            temp = temp->next;
        }

       //removing n
        if (temp->next)
            temp->next = temp->next->next;

        return head;
    }
};