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
    vector<int> largestValues(TreeNode* root) {
        vector<int> ans;
        int level = 0;
        helper(root, level, ans);
        return ans;
    }
    void helper(TreeNode *root, int level, vector<int> &ans)
    {
        if(root == nullptr)
        {
            return;
        }
        if(level == ans.size())
        {
            ans.push_back(root->val);
        }
        else
        {
            ans[level] = max(ans[level], root->val);
        }
        helper(root->left, level+1, ans);
        helper(root->right, level+1, ans);
    }
};
