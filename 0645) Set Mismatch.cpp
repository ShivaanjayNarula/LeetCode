class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> mp;
        for(int i = 0; i < n; i++)
        {
            mp[nums[i]]++;
        }
        int check1 = 0;
        int check2 = 0;
        for(int i = 1; i < n+1; i++)
        {
            if(mp[i] == 2)
            {
                check1 = i;
            }
            if(mp[i] == 0)
            {
                check2 = i;
            }
        }
        return {check1, check2};
    }
};
