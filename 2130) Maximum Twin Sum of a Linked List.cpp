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
    ListNode* findMid(ListNode *head)
    {
        ListNode *slow = head;
        ListNode *fast = head;
        while(fast->next != nullptr && fast->next->next != nullptr)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode *mid = slow;
        return mid;
    }
    ListNode* reverseList(ListNode *head)
    {
        ListNode *prev = nullptr;
        ListNode *curr = head;
        while(curr != nullptr)
        {
            ListNode *next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    int pairSum(ListNode* head) {
        ListNode *head1 = findMid(head);
        head1 = reverseList(head1);
        int ans = INT_MIN;
        while(head1->next != nullptr)
        {
            ans = max(ans, head->val + head1->val);
            head = head->next;
            head1 = head1->next;
        }
        return ans;
    }
};
