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
    void helper(ListNode* head, ListNode* &odd, ListNode* &even, bool oddIndex = true)
    {
        if (head == nullptr)
            return;
        auto next{head->next};
        head->next = nullptr;
        if (oddIndex)
        {
            odd = head;
            helper(next, odd->next, even, !oddIndex);
        }
        else
        {
            even = head;
            helper(next, odd, even->next, !oddIndex);
        }
    }
public:
    ListNode* oddEvenList(ListNode* head) {
        ListNode* odd{}, *even{};
        helper(head, odd, even);
        if (odd != nullptr)
        {
            auto temp{odd};
            for (;temp->next != nullptr; temp = temp->next);
            temp->next = even;
        }
        return odd;
    }
};