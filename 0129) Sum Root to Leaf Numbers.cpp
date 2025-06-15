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
    int sumNumbers(TreeNode* root) {
        int ans = 0;
        return calculate(root, ans);
    }

    int calculate(TreeNode* root, int ans)
    {
        if(root == nullptr)
        {
            return 0;
        }
        ans = ans * 10 + root->val;
        if(root->left == nullptr && root->right == nullptr)
        {
            return ans;
        }
        int left = calculate(root->left, ans);
        int right = calculate(root->right, ans);
        return left + right;
    }
};
