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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        int level = 0;
        dfs(root, level, ans);
        int n = ans.size();
        for(int i = 0; i < n; i++)
        {
            if(i % 2 != 0)
            {
                reverse(ans[i].begin(), ans[i].end());
            }
        }
        return ans;
    }
    void dfs(TreeNode *root, int level, vector<vector<int>> &ans)
    {
        if(root == nullptr)
        {
            return;
        }
        if(level == ans.size())
        {
            ans.push_back({});
        }
        ans[level].push_back(root->val);
        dfs(root->left, level + 1, ans);
        dfs(root->right, level + 1, ans);
    }
};
