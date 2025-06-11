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
    vector<int> findMode(TreeNode* root) {
        vector<int> ans;
        int prev = 0;
        int count = 0;
        int maxi = 0;
        dfs(root, ans, count, maxi, prev);
        return ans;
    }
    void dfs(TreeNode *root, vector<int> &ans, int &count, int &maxi, int &prev)
    {
        if(root == nullptr)
        {
            return;
        }
        dfs(root->left, ans, count, maxi, prev);
        if(prev == root->val)
        {
            count++;
        }
        else
        {
            count = 1;
        }
        if(count == maxi)
        {
            ans.push_back(root->val);
        }
        else if(count > maxi)
        {
            maxi = count;
            ans = {root->val};
        }
        prev = root->val;
        dfs(root->right ,ans, count, maxi, prev);
    }
};
