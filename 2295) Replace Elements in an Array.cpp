class Solution {
public:
    vector<int> arrayChange(vector<int>& nums, vector<vector<int>>& operations) {
        ios::sync_with_stdio(0);
        cin.tie(0);
        int n = nums.size();
        unordered_map<int, int> mp;
        for(int i = 0; i < n; i++)
        {
            mp[nums[i]] = i;
        }
        for(auto i : operations)
        {
            nums[mp[i[0]]] = i[1];
            mp[i[1]] = mp[i[0]];
        }
        return nums;
    }
};
