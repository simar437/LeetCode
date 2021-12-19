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
    int lastRow{}, ans{};  
public:
    int findBottomLeftValue(TreeNode* root, int row = 1) {
        if (root == nullptr)
            return 0;
        if (row > lastRow)
        {
            lastRow = row;
            ans = root->val;
        }
        findBottomLeftValue(root->left, row + 1);
        findBottomLeftValue(root->right, row + 1);
        return ans;
    }
};