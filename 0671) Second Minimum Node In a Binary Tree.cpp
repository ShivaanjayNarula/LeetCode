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
    int findSecondMinimumValue(TreeNode* root) {
        set<int> nums;
        preorderTraversal(root, nums);
        if(nums.size() < 2)
        {
            return -1;
        }
        auto ans = nums.begin();
        advance(ans, 1);
        return *ans;
    }
    void preorderTraversal(TreeNode *root, set<int> &nums)
    {
        if(root == nullptr)
        {
            return;
        }
        nums.insert(root->val);
        preorderTraversal(root->left, nums);
        preorderTraversal(root->right, nums);
    }
};
