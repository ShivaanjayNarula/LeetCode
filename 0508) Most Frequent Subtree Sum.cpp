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
    vector<int> findFrequentTreeSum(TreeNode* root) {
        unordered_map<int, int> mp;
        helper(root, mp);
        int maxi = -1;
        for(auto it : mp)
        {
            maxi = max(maxi, it.second);
        }
        vector<int> ans;
        for(auto it : mp)
        {
            if(it.second == maxi)
            {
                ans.push_back(it.first);
            }
        }
        return ans;
    }
    int helper(TreeNode *root, unordered_map<int, int> &mp)
    {
        if(root == nullptr)
        {
            return 0;
        }
        int add = root->val + helper(root->left, mp) + helper(root->right, mp);
        mp[add]++;
        return add;
    }
};
