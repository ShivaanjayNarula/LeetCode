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
    ListNode* insertionSortList(ListNode* head) {
        if(!head || !head->next)
        {
            return head;
        }
        ListNode *temp = head;
        vector<int> nums;
        while(temp)
        {
            nums.push_back(temp->val);
            temp = temp->next;
        }
        int n = nums.size();
        sort(nums.begin(), nums.end());
        ListNode ans;
        ListNode *check = &ans;
        for(int i = 0; i < n; i++)
        {
            ListNode *add = new ListNode(nums[i]);
            check->next = add;
            check = check->next;
        }
        return ans.next;
    }
};
