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
    TreeNode* balanceBST(TreeNode* root) {
        vector<int> nums;
        inorder(root, nums);
        int n = nums.size();
        return helper(nums, 0, n-1);
    }
    void inorder(TreeNode *root, vector<int> &nums)
    {
        if(root == nullptr)
        {
            return;
        }
        inorder(root->left, nums);
        nums.push_back(root->val);
        inorder(root->right, nums);
    }
    TreeNode *helper(vector<int> nums, int left, int right)
    {
        if(left > right)
        {
            return nullptr;
        }
        int mid = (left + right) / 2;
        TreeNode *root = new TreeNode(nums[mid]);
        root->left = helper(nums, left, mid-1);
        root->right = helper(nums, mid+1, right);
        return root;
    }
};
