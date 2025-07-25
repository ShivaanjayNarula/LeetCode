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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        helper(root, ans, 0);
        return ans;
    }
    void helper(TreeNode *root, vector<vector<int>> &ans, int level)
    {
        if(root == nullptr)
        {
            return;
        }
        int n = ans.size();
        if(level >= n)
        {
            ans.push_back({});
        }
        ans[level].push_back(root->val);
        helper(root->left, ans, level+1);
        helper(root->right, ans, level+1);
    }
};
