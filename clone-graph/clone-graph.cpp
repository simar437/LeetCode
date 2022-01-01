/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
    unordered_map<int, Node*> m;
public:
    Node* cloneGraph(Node* node) {
        if (node == nullptr)
        {
            return nullptr;
        }
        if (auto x = m[node->val]; x != nullptr)
        {
            return x;
        }
        auto t =  new Node(node->val);
        m[node->val] = t;
        for (auto& i : node->neighbors)
        {
            t->neighbors.push_back(cloneGraph(i));
        }
        return t;
    }
};