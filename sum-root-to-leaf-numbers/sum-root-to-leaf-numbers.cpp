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
    int ans{};
    void helper(TreeNode* root, int x = 0)
    {
        if (root == nullptr)
            return;
        x += root->val;
        if (root->left == nullptr && root->right == nullptr)
        {
            ans += x;
            return;
        }
        helper(root->left, x * 10);        
        helper(root->right, x * 10);        

    }
public:
    int sumNumbers(TreeNode* root) {
        helper(root);
        return ans;
    }
};