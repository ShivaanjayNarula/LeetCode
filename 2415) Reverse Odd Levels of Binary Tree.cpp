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
    TreeNode* reverseOddLevels(TreeNode* root) {
        int check = 1;
        solve(root->left, root->right, check);
        return root;
    }
    void solve(TreeNode *root1, TreeNode *root2, int check)
    {
        if(root1 == nullptr || root2 == nullptr)
        {
            return;
        }
        if(check % 2 == 1)
        {
            int temp = root1->val;
            root1->val = root2->val;
            root2->val = temp;
        }
        solve(root1->left, root2->right, check+1);
        solve(root1->right, root2->left, check+1);
    }
};
