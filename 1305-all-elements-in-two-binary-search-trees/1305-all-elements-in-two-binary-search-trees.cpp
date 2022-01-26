/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    multiset<int> m;
    void helper(const TreeNode* root)
    {
        if (root == nullptr)
            return;
        m.insert(root->val);
        helper(root->right);
        helper(root->left);
    }
public:
    vector<int> getAllElements(const TreeNode* root1, const TreeNode* root2) {
        helper(root1);
        helper(root2);
        return {begin(m), end(m)};
    }
};