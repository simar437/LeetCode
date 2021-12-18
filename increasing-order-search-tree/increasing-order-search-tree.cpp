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
    vector<TreeNode*> v;
    void helper(TreeNode* root)
    {
        if (root == nullptr)
            return;
        helper(root->left);
        v.push_back(root);
        helper(root->right);
    }
public:
    TreeNode* increasingBST(TreeNode* root) {
        helper(root);
        for (int i{}; i < size(v) - 1; i++)
        {
            v[i]->left = nullptr;
            v[i]->right = v[i + 1];   
        }
        v.back()->left = nullptr;
        return v.front();
    }
};