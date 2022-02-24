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
public:
    string tree2str(TreeNode* root) {
        if (root == nullptr)
            return {};
        string ans = to_string(root->val);
        if (root->left == nullptr && root->right == nullptr)
            return ans;
        ans += '(' + tree2str(root->left) +')';
        if (root->right != nullptr)
            ans += '(' + tree2str(root->right) +')';
        return ans;
    }
};