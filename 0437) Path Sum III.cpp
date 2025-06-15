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
    int pathSum(TreeNode* root, int targetSum) {
        unordered_map<long long, long long> mp;
        mp[0] = 1;
        return helper(root, 0, targetSum, mp);
    }
    long long helper(TreeNode *root, long long curr, long long target, unordered_map<long long, long long> mp)
    {
        if(root == nullptr)
        {
            return 0;
        }
        curr += root->val;
        long long ans = mp[curr - target];
        mp[curr]++;
        ans += helper(root->left, curr, target, mp);
        ans += helper(root->right, curr, target, mp);
        mp[curr]--;
        return ans;
    }
};
