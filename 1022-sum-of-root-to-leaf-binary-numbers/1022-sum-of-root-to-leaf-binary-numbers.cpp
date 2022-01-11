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
    int sumRootToLeaf(TreeNode* root, bitset<31> b = {}) {
        if (root == nullptr)
        {
            return 0;
        }
        b[0] = root->val;
        if (root->right == nullptr && root->left == nullptr)
        {
            return b.to_ulong();
        }
        return sumRootToLeaf(root->left, b << 1) + 
            sumRootToLeaf(root->right, b << 1);
    }
};