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
        for (auto temp{head}; temp != nullptr; temp = temp->next, size++);
        size /= 2;
        auto temp{head};
        while (size--)
        {
            temp = temp->next;
        }
        return temp;
    }
};