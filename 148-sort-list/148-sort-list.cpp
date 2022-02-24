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
    ListNode* sortList(ListNode* head) {
        if (head == nullptr)
        {
            return head;
        }
        vector<ListNode*>v;
        while (head != nullptr)
        {
            v.push_back(head);
            head = head->next;
        }
        sort(begin(v), end(v), [] (const auto& a, const auto& b) {
            return a->val < b->val;
        });
        int n = size(v);
        for (int i{}; i < n - 1; i++)
        {
            v[i]->next = v[i + 1];
        }
        v[n - 1]->next = nullptr;
        return v.front();
    }
};