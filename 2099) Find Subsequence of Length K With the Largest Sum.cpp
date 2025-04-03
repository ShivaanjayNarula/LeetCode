class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        vector<int> check = nums;
        sort(check.rbegin(), check.rend());
        unordered_map<int, int> mp;
        for(int i = 0; i < k; i++)
        {
            mp[check[i]]++;
        }
        vector<int> ans;
        for(int i : nums)
        {
            if(mp.find(i) != mp.end() && mp[i]-->0)
            {
                ans.push_back(i);
            }
        }
        return ans;
    }
};
