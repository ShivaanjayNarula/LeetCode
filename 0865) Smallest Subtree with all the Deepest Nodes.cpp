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
    TreeNode* subtreeWithAllDeepest(TreeNode* root) {
        if(root == nullptr)
        {
            return root;
        }
        int check1 = height(root->left);
        int check2 = height(root->right);
        if(check1 == check2)
        {
            return root;
        }
        if(check1 > check2)
        {
            return  subtreeWithAllDeepest(root->left);
        }
        return subtreeWithAllDeepest(root->right);
    }
    int height(TreeNode *root)
    {
        if(root == nullptr)
        {
            return 0;
        }
        return max(height(root->left), height(root->right)) + 1;
    }
};
