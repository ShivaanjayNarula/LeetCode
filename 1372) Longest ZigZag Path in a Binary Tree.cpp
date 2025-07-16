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
    int longestZigZag(TreeNode* root) {
        int ans = 0;
        helper(root, 0, 0, ans);
        return ans;
    }
    void helper(TreeNode *root, int left, int right, int &ans)
    {
        if(root == nullptr)
        {
            return;
        }
        ans = max(ans, left);
        ans = max(ans, right);
        helper(root->left, 0, left+1, ans);
        helper(root->right, right+1, 0, ans);
        return;
    }
};
