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
    vector<vector<int>> v;
    void helper(TreeNode* root, int h = 0)
    {
        if (root ==  nullptr)
            return;
        if (h >= v.size())
        {
            v.emplace_back(1, root->val);
        }
        else
        {
            v[h].push_back(root->val);
        }
        helper(root->left, h + 1);
        helper(root->right, h + 1);
    }
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        helper(root);
        return vector<vector<int>>(rbegin(v), rend(v));
    }
};