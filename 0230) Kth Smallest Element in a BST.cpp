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
    int kthSmallest(TreeNode* root, int k) {
        vector<int> nums;
        preorderTraversal(root, nums);
        sort(nums.begin(), nums.end());
        return nums[k-1];
    }
    void preorderTraversal(TreeNode *root, vector<int> &nums)
    {
        if(root == nullptr)
        {
            return;
        }
        nums.push_back(root->val);
        preorderTraversal(root->left, nums);
        preorderTraversal(root->right, nums);
    }
};
