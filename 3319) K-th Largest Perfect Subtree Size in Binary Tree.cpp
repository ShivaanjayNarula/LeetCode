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
    int kthLargestPerfectSubtree(TreeNode* root, int k) {
        vector<int> ans;
        helper(root, ans);
        int n = ans.size();
        if(n < k)
        {
            return -1;
        }
        sort(ans.begin(), ans.end());
        return ans[n-k];
    }
    int helper(TreeNode *root, vector<int> &ans)
    {
        if(root == nullptr)
        {
            return 0;
        }
        int left = helper(root->left, ans);
        int right = helper(root->right, ans);
        if(left == right && left != -1)
        {
            ans.push_back(left + right + 1);
            return left + right + 1;
        }
        return -1;
    }
};
