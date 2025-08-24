class Solution {
public:
    vector<int> distinctDifferenceArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        unordered_map<int, int> mp1;
        unordered_map<int, int> mp2;
        for(int i = 0; i < n; i++)
        {
            mp1[nums[i]]++;
        }
        for(int i = 0; i < n; i++)
        {
            mp2[nums[i]]++;
            mp1[nums[i]]--;
            if(mp1[nums[i]] == 0)
            {
                mp1.erase(nums[i]);
            }
            ans.push_back(mp2.size() - mp1.size());
        }
        return ans;
    }
};
