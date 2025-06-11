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
    int findBottomLeftValue(TreeNode* root) {
        int maxlevel = -1;
        int currlevel = 0;
        int ans = 0;
        solve(root, currlevel, maxlevel, ans);
        return ans;
    }
    void solve(TreeNode *root, int currlevel, int &maxlevel, int &ans)
    {
        if(root == nullptr)
        {
            return;
        }
        if(currlevel > maxlevel)
        {
            maxlevel = currlevel;
            ans = root->val;
        }
        solve(root->left, currlevel + 1, maxlevel, ans);
        solve(root->right, currlevel + 1, maxlevel, ans);
    }
};
