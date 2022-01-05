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
    vector<int> ans;
    void helper(const TreeNode* root, int h = 0)
    {
        if (root == nullptr)
        {
            return;
        }
        if (h >= size(ans))
        {
            ans.push_back(root->val);
        }
        else if (root->val > ans[h])
        {
            ans[h] = root->val;
        }
        helper(root->left, h + 1);
        helper(root->right, h + 1);
    }
public:
    vector<int>& largestValues(const TreeNode* root) {
        helper(root);
        return ans;
    }
};