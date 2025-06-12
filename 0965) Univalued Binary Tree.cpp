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
    bool isUnivalTree(TreeNode* root) {
        if(root == nullptr)
        {
            return true;
        }
        int k = root->val;
        return check(root, k);
    }
    bool check(TreeNode *root, int k)
    {
        if(root == nullptr)
        {
            return true;
        }
        if(root->val != k)
        {
            return false;
        }
        return (check(root->left, k) && check(root->right, k));
    }
};
