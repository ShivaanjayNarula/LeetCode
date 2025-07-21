class Solution {
public:
    vector<int> goodDaysToRobBank(vector<int>& security, int time) {
        int n = security.size();
        vector<int> nums1(n, 0);
        vector<int> nums2(n, 0);
        int count = 1;
        nums1[0] = 1;
        nums2[n-1] = 1;
        for(int i = 1; i < n; i++)
        {
            if(security[i] <= security[i-1])
            {
                count++;
            }
            else
            {
                count = 1;
            }
            nums1[i] = count;
        }
        count = 1;
        for(int i = n-2; i >= 0; i--)
        {
            if(security[i] <= security[i+1])
            {
                count++;
            }
            else
            {
                count = 1;
            }
            nums2[i] = count;
        }
        vector<int> ans;
        for(int i = 0; i < n; i++)
        {
            if(nums1[i] - 1 >= time && nums2[i] - 1 >= time)
            {
                ans.push_back(i);
            }
        }
        return ans;
    }
};
