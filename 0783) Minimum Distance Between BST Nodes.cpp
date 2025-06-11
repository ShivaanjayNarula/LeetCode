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
    int minDiffInBST(TreeNode* root) {
        int ans = INT_MAX;
        int prev = -1;
        check(root, ans, prev);
        return ans;
    }
    void check(TreeNode *root, int &ans, int &prev)
    {
        if(root == nullptr)
        {
            return;
        }
        check(root->left, ans, prev);
        if(prev != -1)
        {
            ans = min(ans, root->val - prev);
        }
        prev = root->val;
        check(root->right, ans, prev);
    }
};
