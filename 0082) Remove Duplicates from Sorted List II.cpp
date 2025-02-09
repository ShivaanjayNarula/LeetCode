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
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head)
        {
            return 0;
        }
        if(!head->next)
        {
            return head;
        }
        int check = head->val;
        ListNode *temp = head->next;
        if(temp->val != check)
        {
            head->next = deleteDuplicates(temp);
            return head;
        }
        else
        {
            while(temp && temp->val == check)
            {
                temp = temp->next;
            }
            return deleteDuplicates(temp);
        }
    }
};
