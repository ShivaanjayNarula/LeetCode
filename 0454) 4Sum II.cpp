class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        ios::sync_with_stdio(0);
        cin.tie(0);
        int n1 = nums1.size();
        int n2 = nums2.size();
        int n3 = nums3.size();
        int n4 = nums4.size();
        int ans = 0;
        unordered_map<int, int> mp;
        vector<int> check;
        for(int i = 0; i < n4; i++)
        {
            for(int j = 0; j < n3; j++)
            {
                mp[nums4[i] + nums3[j]]++;
                check.push_back(nums4[i] + nums3[j]);
            }
        }
        sort(check.begin(), check.end());
        for(int i = 0; i < n1; i++)
        {
            for(int j = 0; j < n2; j++)
            {
                int sum = nums1[i] + nums2[j];
                auto it = lower_bound(check.begin(), check.end(), 0-sum);
                if(it != check.end())
                {
                    int m = it - check.begin();
                    if(check[m] == 0-sum)
                    {
                        ans += mp[check[m]];
                    }
                }
            }
        }
        return ans;
    }
};
