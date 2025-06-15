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
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> ans;
        vector<int> path;
        helper(root, targetSum, ans, path);
        return ans;
    }
    void helper(TreeNode *root, int targetSum, vector<vector<int>> &ans, vector<int> &path)
    {
        if(root == nullptr)
        {
            return;
        }
        path.push_back(root->val);
        if(root->left == nullptr && root->right == nullptr)
        {
            if(targetSum == root->val)
            {
                ans.push_back(path);
            }
        }
        else
        {
            helper(root->left, targetSum - root->val, ans, path);
            helper(root->right, targetSum - root->val, ans, path);
        }
        path.pop_back();
    }
};
