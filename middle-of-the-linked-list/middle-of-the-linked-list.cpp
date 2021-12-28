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
    ListNode* middleNode(ListNode* head) {
        int size{};
        for (auto t{head}; t != nullptr; t = t->next, size++);
        int mid = size / 2;
        auto ans{head};
        while (mid--)
        {
            ans = ans->next;
        }
        return ans;
    }
};