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
    int widthOfBinaryTree(TreeNode* root) {
        vector<vector<unsigned long long>> nums;
        return helper(root, 0LL, 1LL, nums);
    }
    int helper(TreeNode *root, unsigned long long level, unsigned long long width, vector<vector<unsigned long long>> &nums)
    {
        if(root == nullptr)
        {
            return 0;
        }
        if(nums.size() == level)
        {
            nums.push_back({width, width});
        }
        else
        {
            nums[level][1] = width;
        }
        int check1 = nums[level][1] - nums[level][0] + 1;
        int check2 = helper(root->left, level+1, 2*width, nums);
        int check3 = helper(root->right, level+1, 2*width+1, nums);
        return max({check1, check2, check3});
    }
};
