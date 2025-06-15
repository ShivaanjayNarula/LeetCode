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
    int diameterOfBinaryTree(TreeNode* root) {
        int ans = 0;
        height(root, ans);
        return ans;
    }
    int height(TreeNode *root, int &ans)
    {
        if(!root)
        {
            return 0;
        }
        int check1 = height(root->left, ans);
        int check2 = height(root->right, ans);
        ans = max(ans, check1 + check2);
        return 1 + max(check1, check2);
    }
};
