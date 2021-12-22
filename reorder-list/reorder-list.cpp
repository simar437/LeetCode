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
    void reorderList(ListNode* head) {
        vector<ListNode*> v;
        auto t{head};
        while (t != nullptr)
        {
            v.push_back(t);
            t = t->next;
        }
        int n = v.size();
        for (int i{}, j{n - 1};i <= j ; i++, j--)
        {
            if (j != n - 1)
            {
                v[j + 1]->next = v[i];
            }
            v[i]->next = v[j];
            v[j]->next = nullptr;
        }
    }
};