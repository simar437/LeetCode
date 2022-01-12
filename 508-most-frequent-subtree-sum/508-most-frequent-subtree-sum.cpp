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
    int helper(const TreeNode* root)
    {
        if (root == nullptr)
            return 0;
        int x = root->val + helper(root->right) + helper(root->left);
        m[x]++;
        return x;
    }
public:
    vector<int> findFrequentTreeSum(const TreeNode* root) {
        helper(root);
        vector<int> ans;
        int highestFrequency{};
        for (const auto& [num, count] : m)
        {
            if (count > highestFrequency)
            {
                highestFrequency = count;
                ans.clear();
                ans.push_back(num);
            }
            else if (count == highestFrequency)
            {
                ans.push_back(num);
            }
        }
        return ans;
    }
};