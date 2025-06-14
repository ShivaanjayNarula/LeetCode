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
    int maxPathSum(TreeNode* root) {
        int ans = root->val;
        solve(root, ans);
        return ans;
    }
    int solve(TreeNode *root, int &ans)
    {
        if(root == nullptr)
        {
            return 0;
        }
        int node1 = solve(root->left, ans);
        int node2 = solve(root->right, ans);
        ans = max({ans, root->val, node1 + root->val, node2 + root->val, node1 + node2 + root->val});
        return max(root->val, root->val + max(node1, node2));
    }
};
