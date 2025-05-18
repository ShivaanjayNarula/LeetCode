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
    ListNode* sortList(ListNode* head) {
        vector<int> nums;
        ListNode *temp = head;
        while(temp)
        {
            nums.push_back(temp->val);
            temp = temp->next;
        }
        sort(nums.begin(), nums.end());
        temp = head;
        int check = 0;
        while(temp)
        {
            temp->val = nums[check];
            temp = temp->next;
            check++;
        }
        return head;
    }
};
