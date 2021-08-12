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
    ListNode *head;
    random_device rd;
    uniform_int_distribution<int> dist;
public:
    /** @param head The linked list's head.
        Note that the head is guaranteed to be not null, so it contains at least one node. */
    Solution(ListNode* _head) 
    :head{_head} {
        int size{};
        for (auto x{_head}; x != nullptr; x = x->next, size++);
        uniform_int_distribution<int> temp(0, size - 1);
        dist = temp;
    }
    
    /** Returns a random node's value. */
    int getRandom() {
        int x = dist(rd);
        auto temp{head};
        while (x--)
        {
            temp = temp->next;
        }
        return temp->val; 
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(head);
 * int param_1 = obj->getRandom();
 */