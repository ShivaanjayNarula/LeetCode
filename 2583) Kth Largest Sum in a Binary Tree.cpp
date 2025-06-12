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
    long long kthLargestLevelSum(TreeNode* root, int k) {
        vector<long long> ans;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty())
        {
            int n = q.size();
            long long add = 0;
            for(int i = 0; i < n; i++)
            {
                TreeNode *temp = q.front();
                q.pop();
                if(temp->left != nullptr)
                {
                    q.push(temp->left);
                }
                if(temp->right != nullptr)
                {
                    q.push(temp->right);
                }
                add += temp->val;
            }
            ans.push_back(add);
        }
        sort(ans.begin(), ans.end());
        int n = ans.size();
        if(k > n)
        {
            return -1;
        }
        return ans[n-k];
    }
};
