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
    int getDecimalValue(ListNode* head) {
        if(!head->next)
        {
            return head->val;
        }
        vector<int> nums;
        ListNode *temp = head;
        while(temp)
        {
            nums.push_back(temp->val);
            temp = temp->next;
        }
        int ans = 0;
        int n = nums.size();
        int check = n-1;
        for(int i = 0; i < n; i++)
        {
            if(nums[i] == 1)
            {
                ans += pow(2, check);
            }
            check--;
        }
        return ans;
    }
};
