class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int> st;
        for(int i = 0; i < n; i++)
        {
            st.insert(nums[i]);
        }
        int k = st.size();
        int ans = 0;
        int i = 0;
        int j = 0;
        unordered_map<int, int> mp;
        while(j < n)
        {
            if(mp[nums[j]] == 0)
            {
                k--;
            }
            mp[nums[j]]++;
            while(k == 0)
            {
                mp[nums[i]]--;
                if(mp[nums[i]] == 0)
                {
                    k++;
                }
                i++;
            }
            ans += i;
            j++;
        }
        return ans;
    }
};
