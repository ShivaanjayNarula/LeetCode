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
class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode *slow = head;
        ListNode *fast = head;
        for(int i = 0; i < k-1; i++)
        {
            fast = fast->next;
        }
        ListNode *temp = fast;
        while(fast->next)
        {
            slow = slow->next;
            fast = fast->next;
        }
        swap(temp->val, slow->val);
        return head;
    }
};
