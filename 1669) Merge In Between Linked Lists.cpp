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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode *head = list1;
        ListNode *curr = list1;
        for(int i = 1; i < a; i++)
        {
            curr = curr->next;
        }
        ListNode *start = curr;
        ListNode *end = curr->next;
        for(int i = a; i <= b; i++)
        {
            ListNode *temp = end;
            end = end->next;
        }
        start->next = list2;
        while(curr->next)
        {
            curr = curr->next;
        }
        curr->next = end;
        return head;
    }
};
