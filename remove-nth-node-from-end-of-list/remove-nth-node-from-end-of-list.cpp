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
        auto t{head};
        while (n--)
        {
            t = t->next;
        }
        if (t == nullptr)
        {
            return head->next;
        }
        auto node{head};
        while (t != nullptr && t->next != nullptr)
        {
            node = node->next;
            t = t->next;
        }
        node->next = node->next->next;
        return head;
    }
};