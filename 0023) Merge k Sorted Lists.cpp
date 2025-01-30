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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.empty())
        {
            return nullptr;
        }
        while(lists.size() > 1)
        {
            lists.push_back(merge(lists[0], lists[1]));
            lists.erase(lists.begin());
            lists.erase(lists.begin());
        }
        return lists.front();
    }
    ListNode *merge(ListNode *list1, ListNode *list2)
    {
        if(list1 == nullptr)
        {
            return list2;
        }
        if(list2 == nullptr)
        {
            return list1;
        }
        if(list1->val <= list2->val)
        {
            list1->next = merge(list1->next, list2);
            return list1;
        }
        else
        {
            list2->next = merge(list1, list2->next);
            return list2;
        }
    }
};
