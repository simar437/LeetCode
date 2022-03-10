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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2, int carry = 0) {
        if (l1 == nullptr && l2 == nullptr)
        {
            if (carry != 0)
            {
                return new ListNode(carry);
            }
            return nullptr;
        }
        int sum = carry;
        carry = 0;
        ListNode* node;
        if (l1 != nullptr)
        {
            sum += l1->val;
        }
        if (l2 != nullptr)
        {
            sum += l2->val;
        }
        if (sum >= 10)
        {
            sum -= 10;
            carry = 1;
        }
        node = new ListNode(sum);
        node->next = addTwoNumbers(l1 != nullptr ? l1->next : nullptr,l2 != nullptr ? l2->next : nullptr, carry);
        return node;
    }
};