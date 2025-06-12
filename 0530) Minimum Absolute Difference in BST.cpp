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
    int getMinimumDifference(TreeNode* root) {
        if(root == nullptr)
        {
            return 0;
        }
        vector<int> nums;
        dfs(root, nums);
        sort(nums.begin(), nums.end());
        int ans = INT_MAX;
        int n = nums.size();
        for(int i = 0; i < n-1; i++)
        {
            ans = min(ans, nums[i+1] - nums[i]);
        }
        return ans;
    }
    void dfs(TreeNode *root, vector<int> &nums)
    {
        if(root == nullptr)
        {
            return;
        }
        dfs(root->left, nums);
        nums.push_back(root->val);
        dfs(root->right, nums);
    }
};
