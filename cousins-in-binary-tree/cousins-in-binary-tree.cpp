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
    pair<TreeNode*, int> a{}, b{};
public:
    bool isCousins(TreeNode* root, int x, int y, int h = 0, TreeNode* parent = nullptr) {
        if (root == nullptr)
            return false;
        if (root->val == x)
            a = {parent, h};
        if (root->val == y)
            b = {parent, h};
        isCousins(root->left, x, y, h + 1, root);
        isCousins(root->right, x, y, h + 1, root);
        return a.first != b.first && a.second == b.second;
    }
};