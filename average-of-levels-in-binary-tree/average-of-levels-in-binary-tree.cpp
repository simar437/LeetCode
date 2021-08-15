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
    vector<vector<double>> v;
    void helper(TreeNode* root, int h = 0)
    {
        if (root == nullptr)
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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> ans;
        helper(root);
        for (auto& i : v)
        {
            ans.push_back(accumulate(begin(i), end(i), 0.0) / i.size());
        }
        return ans;
    }
};