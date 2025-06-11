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
    int deepestLeavesSum(TreeNode* root) {
        int depth = 0;
        int ans = 0;
        solve(root, depth, ans, 0);
        return ans;
    }
    void solve(TreeNode *root, int &depth, int &ans, int check)
    {
        if(root == nullptr)
        {
            return;
        }
        if(root->left == nullptr && root->right == nullptr)
        {
            if(check > depth)
            {
                depth = check;
                ans = root->val;
            }
            else if(depth == check)
            {
                ans += root->val;
            }
            return;
        }
        solve(root->left, depth, ans, check+1);
        solve(root->right, depth, ans, check+1);
    }
};
