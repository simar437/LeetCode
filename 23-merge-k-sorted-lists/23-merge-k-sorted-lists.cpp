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
    int findSmallest(const vector<ListNode*>& arr)
    {
        int lowest{INT_MAX}, index{};
        for (int x{-1}; const auto& i : arr)
        {
            x++;
            if (i == nullptr)
                continue;
            if (i->val < lowest)
            {
                lowest = i->val;
                index = x;
            }
            
        }
        return index;
    }
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode* ans = new ListNode(-1);
        auto temp = ans;
        while (any_of(begin(lists), end(lists),
                [](const auto& x){
                    return x != nullptr; 
                })
            )
        {
            int index = findSmallest(lists);
            temp->next = lists[index];
            lists[index] = lists[index]->next;
            temp = temp->next;
        }
        return ans->next;
    }
};