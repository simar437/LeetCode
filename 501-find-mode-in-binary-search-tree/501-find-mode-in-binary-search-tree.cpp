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
    unordered_map<int, int> m;
    void helper(TreeNode* root)
    {
        if (root == nullptr)
            return;
        m[root->val]++;
        helper(root->right);
        helper(root->left);
    }
public:
    vector<int> findMode(TreeNode* root) {
        helper(root);
        vector<int> ans;
        int count{};
        for (const auto& [key, val] : m)
        {
            if (val > count)
            {
                ans.clear();
                ans.push_back(key);
                count = val;
            }
            else if (val == count)
            {
                ans.push_back(key);
            }
        }
        return ans;
    }
};