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
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> nums1;
        vector<int> nums2;
        nums1 = check(root1, nums1);
        nums2 = check(root2, nums2);
        if(nums1 == nums2)
        {
            return true;
        }
        return false;
    }
    vector<int> check(TreeNode *root, vector<int> &nums)
    {
        if(root == nullptr)
        {
            return nums;
        }
        if(root->left == nullptr && root->right == nullptr)
        {
            nums.push_back(root->val);
        }
        nums = check(root->left, nums);
        nums = check(root->right, nums);
        return nums;
    }
};
