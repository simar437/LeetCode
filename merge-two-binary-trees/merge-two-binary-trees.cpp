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
    void helper(TreeNode* &root1, TreeNode* &root2)
    {
        if (root2 == nullptr)
            return;
        if (root1 == nullptr)
        {
            root1 = root2;
            return;
        }
        root1->val += root2->val;
        helper(root1->left, root2->left);
        helper(root1->right, root2->right);
    }
public:
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        helper(root1, root2);
        return root1;
    }
};