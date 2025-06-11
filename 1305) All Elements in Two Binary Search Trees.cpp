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
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int> ans;
        dfs(root1, ans);
        dfs(root2, ans);
        sort(ans.begin(), ans.end());
        return ans;
    }
    void dfs(TreeNode *root, vector<int> &nums)
    {
        if(root == nullptr)
        {
            return;
        }
        nums.push_back(root->val);
        dfs(root->left, nums);
        dfs(root->right, nums);
    }
};
