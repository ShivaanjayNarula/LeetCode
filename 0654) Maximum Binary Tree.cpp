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
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        int n = nums.size();
        return helper(nums, 0, n);
    }
    TreeNode* helper(vector<int> &nums, int left, int right)
    {
        if(left == right)
        {
            return nullptr;
        }
        int maxi = left;
        for(int i = left; i < right; i++)
        {
            if(nums[i] > nums[maxi])
            {
                maxi = i;
            }
        }
        TreeNode *root = new TreeNode(nums[maxi]);
        root->left = helper(nums, left, maxi);
        root->right = helper(nums, maxi+1, right);
        return root;
    }
};
