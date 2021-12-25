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
    long lowest{LONG_MAX}, second_lowest{LONG_MAX};
    void helper(TreeNode* root) 
    {
        if (root == nullptr)
            return;
        if (lowest > root->val)
        {
            second_lowest = lowest;
            lowest = root->val;
        }
        if (lowest < root->val && second_lowest > root->val)
            second_lowest = root->val;
        helper(root->right);
        helper(root->left);
    }
public:
    int findSecondMinimumValue(TreeNode* root) {
        helper(root);
        return second_lowest == LONG_MAX ? -1 : second_lowest;
    }
};