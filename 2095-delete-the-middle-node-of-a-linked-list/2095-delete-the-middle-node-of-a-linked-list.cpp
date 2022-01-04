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
    ListNode* deleteMiddle(ListNode* head) {
        int toRemove{};
        for (auto t{head}; t != nullptr; t = t->next, toRemove++);
        toRemove /= 2;
        auto t{head};
        while (toRemove --> 1)
        {
            t = t->next;
        }
        if (t->next == nullptr)
            return {};
        t->next = t->next->next;
        return head;
    }
};