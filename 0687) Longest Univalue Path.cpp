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
    int longestUnivaluePath(TreeNode* root) {
        if(root == nullptr)
        {
            return 0;
        }
        int ans = 0;
        calculate(root, ans);
        return ans;
    }
    int calculate(TreeNode *root, int &ans)
    {
        if(root == nullptr)
        {
            return 0;
        }
        int path1 = calculate(root->left, ans);
        int path2 = calculate(root->right, ans);
        int left = 0;
        int right = 0;
        if(root->left != nullptr && root->left->val == root->val)
        {
            left = path1 + 1;
        }
        if(root->right != nullptr && root->right->val == root->val)
        {
            right = path2 + 1;
        }
        ans = max(ans, left + right);
        return max(left, right);
    }
};
