/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>> ans;
        int level = 0;
        solve(root, level, ans);
        return ans;
    }

    void solve(Node *root, int level, vector<vector<int>> &ans) {
        if(root == nullptr)
        {
            return;
        }
        if(level == ans.size())
        {
            ans.push_back({root->val});
        }
        else
        {
            ans[level].push_back(root->val);
        }
        for(Node* child : root->children)
        {
            solve(child, level + 1, ans);
        }
    }
};
