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
    int sumEvenGrandparent(TreeNode* root) {
        int ans = 0;
        dfs(root, ans);
        return ans;
    }
    void dfs(TreeNode *root, int &ans)
    {
        if(root == nullptr)
        {
            return;
        }
        if(root->val % 2 == 0)
        {
            if(root->left && root->left->left)
            {
                ans += root->left->left->val;
            }
            if(root->left && root->left->right)
            {
                ans += root->left->right->val;
            }
            if(root->right && root->right->left)
            {
                ans += root->right->left->val;
            }
            if(root->right && root->right->right)
            {
                ans += root->right->right->val;
            }
        }
        dfs(root->left, ans);
        dfs(root->right, ans);
    }
};
