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
    bool hasCycle(ListNode *head) {
        unordered_set<ListNode*> s;
        while (head != nullptr)
        {
            if (!s.insert(head).second)
            {
                return true;
            }
            head = head->next;
        }
        return false;
    }
};