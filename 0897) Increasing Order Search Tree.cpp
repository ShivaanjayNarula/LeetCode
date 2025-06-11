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
    TreeNode* increasingBST(TreeNode* root) {
        TreeNode *ans = new TreeNode(-1);
        TreeNode *curr = ans;
        dfs(root, curr);
        return ans->right;
    }
    void dfs(TreeNode *root, TreeNode *&curr)
    {
        if(root == nullptr)
        {
            return;
        }
        dfs(root->left, curr);
        curr->right = new TreeNode(root->val);
        curr = curr->right;
        dfs(root->right, curr);
    }
};
