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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        ListNode *prev = head;
        ListNode *curr = head->next;
        ListNode *nextnode = curr->next;
        vector<int> check;
        int i = 1;
        while(nextnode != NULL)
        {
            if(prev->val < curr->val && nextnode->val < curr->val || prev->val > curr->val && nextnode->val > curr->val)
            {
                check.push_back(i);
            }
            prev = curr;
            curr = nextnode;
            nextnode = curr->next;
            i++;
        }
        int n = check.size();
        if(n >= 2)
        {
            int maxi = check[n-1] - check[0];
            int mini = INT_MAX;
            for(int i = 0; i < n-1; i++)
            {
                mini = min(mini, check[i+1] - check[i]);
            }
            return {mini, maxi};
        }
        return {-1, -1};
    }
};
