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
    int sumRootToLeaf(TreeNode* root) {
        int ans = 0;
        string s = "";
        helper(root, ans, s);
        return ans;
    }
    void helper(TreeNode *root, int &ans, string &s)
    {
        if(root == nullptr)
        {
            return;
        }
        s.push_back(root->val + '0');
        if(root->left == nullptr && root->right == nullptr)
        {
            ans += convert(s);
        }
        helper(root->left, ans, s);
        helper(root->right, ans, s);
        s.pop_back();
    }
    int convert(string s)
    {
        int n = s.size();
        int ans = 0;
        for(int i = 0; i < n; i++)
        {
            ans += (s[i] - '0') * pow(2, (n-i-1));
        }
        return ans;
    }
};
