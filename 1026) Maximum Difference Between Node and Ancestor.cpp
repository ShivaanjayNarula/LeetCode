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
    int maxAncestorDiff(TreeNode* root) {
        if(root == nullptr)
        {
            return 0;
        }
        int minval = root->val;
        int maxval = root->val;
        int ans = 0;
        calculate(root, minval, maxval, ans);
        return ans;
    }
    int calculate(TreeNode* root, int minval, int maxval, int &ans)
    {
        if(root == nullptr)
        {
            return ans;
        }
        ans = max(ans, max(abs(minval - root->val), abs(maxval - root->val)));
        minval = min(minval, root->val);
        maxval = max(maxval, root->val);
        calculate(root->left, minval, maxval, ans);
        calculate(root->right, minval, maxval, ans);
        return ans;
    }
};
