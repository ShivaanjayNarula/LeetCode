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
    int sumOfLeftLeaves(TreeNode* root) {
        int ans = 0;
        calculate(root, ans);
        return ans;
    }
    void calculate(TreeNode* root, int &ans)
    {
        if(root == nullptr)
        {
            return;
        }
        if(root->left && !root->left->left && !root->left->right)
        {
            ans += root->left->val;
        }
        calculate(root->left, ans);
        calculate(root->right, ans);
    }
};
