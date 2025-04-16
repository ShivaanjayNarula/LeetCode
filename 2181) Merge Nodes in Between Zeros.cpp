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
    ListNode* mergeNodes(ListNode* head) {
        if(head->next == nullptr)
        {
            return nullptr;
        }
        ListNode *temp = head->next;
        int add = 0;
        while(temp->val != 0)
        {
            add += temp->val;
            temp = temp->next;
        }
        head->next->val = add;
        head->next->next = mergeNodes(temp);
        return head->next;
    }
};
