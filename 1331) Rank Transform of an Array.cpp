class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> nums(arr.begin(), arr.end());
        sort(nums.begin(), nums.end());
        unordered_map<int, int> mp;
        int n = nums.size();
        vector<int> ans(n);
        int check = 1;
        for(int i = 0; i < n; i++)
        {
            if(mp.find(nums[i]) == mp.end())
            {
                mp[nums[i]] = check++;
            }
        }
        for(int i = 0; i < n; i++)
        {
            ans[i] = mp[arr[i]];
        }
        return ans;
    }
};
