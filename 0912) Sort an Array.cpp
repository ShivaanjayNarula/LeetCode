class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        int n = nums.size();
        map<int, int> mp;
        for(int i = 0; i < n; i++)
        {
            mp[nums[i]]++;
        }
        vector<int> ans;
        for(auto it : mp)
        {
            for(int i = 0; i < it.second; i++)
            {
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};
