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
    vector<TreeNode*> allPossibleFBT(int n) {
        if(n % 2 == 0)
        {
            return {};
        }
        if(n == 1)
        {
            return {new TreeNode(0)};
        }
        vector<TreeNode*> ans;
        for(int i = 1; i < n; i+=2)
        {
            vector<TreeNode*> node1 = allPossibleFBT(i);
            vector<TreeNode*> node2 = allPossibleFBT(n-i-1);
            for(auto it1 : node1)
            {
                for(auto it2 : node2)
                {
                    ans.push_back(new TreeNode(0, it1, it2));
                }
            }
        }
        return ans;
    }
};
