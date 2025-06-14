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
    TreeNode* bstToGst(TreeNode* root) {
        int temp = 0;
        helper(root, temp);
        return root;
    }
    void helper(TreeNode *root, int &temp)
    {
        if(root == nullptr)
        {
            return;
        }
        helper(root->right, temp);
        root->val += temp;
        temp = root->val;
        helper(root->left, temp);
    }
};
