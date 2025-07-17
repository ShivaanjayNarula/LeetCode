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
    bool isCousins(TreeNode* root, int x, int y) {
        int level1 = -1;
        int level2 = -1;
        int parent1 = -1;
        int parent2 = -1;
        return helper(root, 0, -1, x, y, level1, level2, parent1, parent2);
    }
    bool helper(TreeNode *root, int level, int parent, int x, int y, int &level1, int &level2, int &parent1, int &parent2)
    {
        if(root == nullptr)
        {
            return false;
        }
        if(root->val == x)
        {
            level1 = level;
            parent1 = parent;
        }
        if(root->val == y)
        {
            level2 = level;
            parent2 = parent;
        }
        helper(root->left, level+1, root->val, x, y, level1, level2, parent1, parent2);
        helper(root->right, level+1, root->val, x, y, level1, level2, parent1, parent2);
        if(level1 == level2 && parent1 != parent2)
        {
            return true;
        }
        return false;
    }
};
