/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if (head == nullptr)
        {
            return head;
        }
        unordered_map<Node*, Node*> m;
        Node* top = new Node(head->val);
        m[head] = top;
        Node* t1{head}, *t2{top};
        auto func = [&] {
            if (t1->random != nullptr)
            {
                if (m[t1->random] != nullptr)
                {
                    t2->random = m[t1->random];
                }
                else
                {
                    t2->random = new Node(t1->random->val);
                    m[t1->random] = t2->random;
                }
            }
            t1 = t1->next;
        };
        func();
        while (t1 != nullptr)
        {
            if (m[t1] != nullptr)
            {
                t2->next = m[t1];
            }
            else
            {
                t2->next = new Node(t1->val);
            }
            t2 = t2->next; 
            m[t1] = t2;
            func();
        }
        return top;
    }
};