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
    int findTilt(TreeNode* root) {
        int ans = 0;
        helper(root, ans);
        return ans;
    }
    int helper(TreeNode *root, int &ans)
    {
        if(root == nullptr)
        {
            return 0;
        }
        if(root->left == nullptr && root->right == nullptr)
        {
            return root->val;
        }
        int check1 = helper(root->left, ans);
        int check2 = helper(root->right, ans);
        ans += abs(check1 - check2);
        return root->val + check1 + check2;
    }
};
