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
    int ans{INT_MIN};
    void helper(TreeNode* root, vector<int> v = {})
    {
        if (root == nullptr)
        {
            return;
        }
        for (const auto& i : v)
        {
            ans = max(ans, abs(root->val - i));
        }
        v.push_back(root->val);
        helper(root->left, v);
        helper(root->right, v);
    }
public:
    int maxAncestorDiff(TreeNode* root) {
        helper(root);
        return ans;
    }
};