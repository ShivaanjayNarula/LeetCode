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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_set<int> st(nums.begin(), nums.end());
        ListNode *temp = new ListNode(-1);
        temp->next = head;
        ListNode *prev = temp;
        while(head)
        {
            if(st.find(head->val) == st.end())
            {
                prev->next = head;
                prev = prev->next;
            }
            head = head->next;
        }
        prev->next = nullptr;
        return temp->next;
    }
};
