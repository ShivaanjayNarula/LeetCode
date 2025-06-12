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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> sum;
        vector<double> count;
        vector<double> ans;
        calculate(root, 0, sum, count);
        int n = sum.size();
        for(int i = 0; i < n; i++)
        {
            ans.push_back(sum[i] / count[i]);
        }
        return ans;
    }
    void calculate(TreeNode *root, int i, vector<double> &sum, vector<double> &count)
    {
        if(root == nullptr)
        {
            return;
        }
        if(i >= sum.size())
        {
            sum.push_back(0);
            count.push_back(0);
        }
        sum[i] += root->val;
        count[i]++;
        calculate(root->left, i+1, sum, count);
        calculate(root->right, i+1, sum, count);
    }
};
