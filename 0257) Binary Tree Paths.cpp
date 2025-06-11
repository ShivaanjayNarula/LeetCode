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
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        string temp = "";
        dfs(root, temp, ans);
        return ans;
    }
    void dfs(TreeNode *root, string temp, vector<string> &ans)
    {
        if(root == nullptr)
        {
            return;
        }
        if(root->left == nullptr && root->right == nullptr)
        {
            temp += to_string(root->val);
            ans.push_back(temp);
        }
        temp += to_string(root->val) + "->";
        dfs(root->left, temp, ans);
        dfs(root->right, temp, ans);
    }
};
