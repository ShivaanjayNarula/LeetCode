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
    int countNodes(TreeNode* root) {
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        int ans = 0;
        solve(root, ans);
        return ans;
    }
    void solve(TreeNode *root, int &ans)
    {
        if(root == nullptr)
        {
            return;
        }
        if(root->left && root->right)
        {
            ans++;
        }
        if(!root->left || !root->right)
        {
            ans++;
        }
        solve(root->left, ans);
        solve(root->right, ans);
    }
};
