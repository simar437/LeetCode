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
    int helper(TreeNode* root)
    {
        if (root == nullptr)
            return 0;
        int x{helper(root->left)}, y{helper(root->right)};
        ans += abs(x - y);
        return root->val + x + y;
    }
public:
    int findTilt(TreeNode* root) {
        helper(root);
        return ans;
    }
};