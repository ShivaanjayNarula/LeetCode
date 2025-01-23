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
    int numComponents(ListNode* head, vector<int>& nums) {
        unordered_set<int> s(begin(nums), end(nums));
        int check = 0;
        int ans = 0;
        for(; head != nullptr; head = head->next)
        {
            if(s.count(head->val))
            {
                ans += !check;
                check = true;
            }
            else
            {
                check = false;
            }
        }
        return ans;
    }
};
