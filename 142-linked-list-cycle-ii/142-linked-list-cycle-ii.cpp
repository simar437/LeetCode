/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        set<ListNode*> s;
        while (head != nullptr)
        {
            if (auto x = s.insert(head); !x.second)
            {
                return *x.first;
            }
            head = head->next;
        }
        return nullptr;
    }
};