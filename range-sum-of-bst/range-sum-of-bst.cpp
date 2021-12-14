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
    int ans{}, low, high;
    void helper(TreeNode* root)
    {
        if (root == nullptr)
            return;
        if (root->val >= low && root->val <= high)
            ans += root->val;
        helper(root->left);
        helper(root->right);
    }
public:
    int rangeSumBST(TreeNode* root, int _low, int _high) {
        low = _low;
        high = _high;
        helper(root);
        return ans;
    }
};