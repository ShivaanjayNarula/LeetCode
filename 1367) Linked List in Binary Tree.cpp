/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
    bool isSubPath(ListNode* head, TreeNode* root) {
        ListNode *curr = head;
        return dfs(head, curr, root);
    }
    bool dfs(ListNode *head, ListNode *curr, TreeNode *root)
    {
        if(curr == nullptr)
        {
            return true;
        }
        if(root == nullptr)
        {
            return false;
        }
        if(curr->val == root->val)
        {
            curr = curr->next;
        }
        else if(head->val == root->val)
        {
            head = head->next;
        }
        else
        {
            curr = head;
        }
        return dfs(head, curr, root->left) || dfs(head, curr, root->right);
    }
};
