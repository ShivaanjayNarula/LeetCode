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
    int distributeCoins(TreeNode* root) {
        if(root == nullptr)
        {
            return 0;
        }
        int ans = 0;
        helper(root, ans);
        return ans;
    }
    int helper(TreeNode *root, int &ans)
    {
        if(root == nullptr)
        {
            return 0;
        }
        int count1 = helper(root->left, ans);
        int count2 = helper(root->right, ans);
        ans += abs(count1) + abs(count2);
        return count1 + count2 + root->val - 1;
    }
};
