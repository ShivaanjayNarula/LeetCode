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
    void flatten(TreeNode* root) {
        if(root != nullptr)
        {
            convert(root);
        }
    }
    TreeNode *head = nullptr;
    void convert(TreeNode* root)
    {
        if(root->right)
        {
            convert(root->right);
        }
        if(root->left)
        {
            convert(root->left);
        }
        root->left = nullptr;
        root->right = head;
        head = root;
    }
};
