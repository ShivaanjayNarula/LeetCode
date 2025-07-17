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
    TreeNode* recoverFromPreorder(string traversal) {
        int n = traversal.size();
        vector<TreeNode*> ans;
        for(int i = 0; i < n; i++)
        {
            int level = 0;
            while(traversal[i] == '-')
            {
                level++;
                i++;
            }
            int value = 0;
            while(i < n && traversal[i] != '-')
            {
                value *= 10;
                value += traversal[i] - '0';
                i++;
            }
            TreeNode *node = new TreeNode(value);
            while(ans.size() > level)
            {
                ans.pop_back();
            }
            if(!ans.empty())
            {
                if(ans.back()->left == nullptr)
                {
                    ans.back()->left = node;
                }
                else
                {
                    ans.back()->right = node;
                }
            }
            ans.push_back(node);
            i--;
        }
        return ans[0];
    }
};
