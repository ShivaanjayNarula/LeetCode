class Solution {
public:
    int mostFrequent(vector<int>& nums, int key) {
        unordered_map<int, int> mp;
        int n = nums.size();
        int ans = nums[0];
        int check = 0;
        for(int i = 0; i < n-1; i++)
        {
            if(nums[i] == key)
            {
                mp[nums[i+1]]++;
                if(mp[nums[i+1]] > check)
                {
                    check = mp[nums[i+1]];
                    ans = nums[i+1];
                }
            }  
        }
        return ans;
    }
};
