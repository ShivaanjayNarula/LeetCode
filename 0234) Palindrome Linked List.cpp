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
    bool isPalindrome(ListNode* head) {
        ListNode *temp = head;
        return check(temp, head);
    }
    bool check(ListNode *&temp, ListNode *head)
    {
        if(head == nullptr)
        {
            return true;
        }
        bool ans = check(temp, head->next) & (temp->val == head->val);
        temp = temp->next;
        return ans;
    }
};
