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
    ListNode* rotateRight(ListNode* head, int k) {
        int s{};
        for (auto t{head}; t != nullptr; t = t->next, s++);
        if (k == 0 || s == 0 || k % s == 0) 
            return head;
        k %= s;
        auto temp{head};
        while (s - k > 1)
        {
            temp = temp->next;
            s--;
        }
        auto x{temp->next};
        temp->next = nullptr;
        temp = x;
        for (;x->next != nullptr; x = x->next);
        x->next = head;
        return temp;
    }
};