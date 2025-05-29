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
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int i = 0;
        return solve(preorder, i, INT_MAX);
    }
    TreeNode *solve(vector<int> &preorder, int &i, int check)
    {
        int n = preorder.size();
        if(i == n || preorder[i] > check)
        {
            return nullptr;
        }
        TreeNode *root = new TreeNode(preorder[i]);
        i++;
        root->left = solve(preorder, i, root->val);
        root->right = solve(preorder, i, check);
        return root;
    }
};
