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
    vector<int> treeQueries(TreeNode* root, vector<int>& queries) {
        int n = queries.size();
        int height1 = 0;
        int height2 = 0;
        int maxheight1 = 0;
        int maxheight2 = 0;
        vector<int> nums(100001, 0);
        helper1(root, height1, maxheight1, nums);
        helper2(root, height2, maxheight2, nums);
        vector<int> ans(n, 0);
        for(int i = 0; i < n; i++)
        {
            ans[i] = nums[queries[i]];
        }
        return ans;
    }
    void helper1(TreeNode *root, int height, int &maxheight, vector<int> &nums)
    {
        if(root == nullptr)
        {
            return;
        }
        nums[root->val] = maxheight;
        maxheight = max(maxheight, height);
        helper1(root->left, height+1, maxheight, nums);
        helper1(root->right, height+1, maxheight, nums);
    }
    void helper2(TreeNode *root, int height, int &maxheight, vector<int> &nums)
    {
        if(root == nullptr)
        {
            return;
        }
        nums[root->val] = max(nums[root->val], maxheight);
        maxheight = max(maxheight, height);
        helper2(root->right, height+1, maxheight, nums);
        helper2(root->left, height+1, maxheight, nums);
    }
};
