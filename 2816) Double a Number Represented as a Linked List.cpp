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
    ListNode* doubleIt(ListNode* head) {
        ListNode *ans = reverse(head);
        int add = 0;
        ListNode *curr = ans;
        ListNode *prev = nullptr;
        while(curr != nullptr)
        {
            int newValue = curr->val * 2 + add;
            curr->val = newValue % 10;
            if(newValue > 9)
            {
                add = 1;
            }
            else
            {
                add = 0;
            }
            prev = curr;
            curr = curr->next;
        }
        if(add != 0)
        {
            ListNode *insert = new ListNode(add);
            prev->next = insert;
        }
        return reverse(ans);
    }

    ListNode* reverse(ListNode *head)
    {
        ListNode *prev = nullptr;
        ListNode *curr = head;
        ListNode *next;
        while(curr != nullptr)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
};
