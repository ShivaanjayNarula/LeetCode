class Solution {
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        int n = nums.size();
        int count1 = helper(nums, k);
        int count2 = helper(nums, k-1);
        int ans = count1 - count2;
        return ans;
    }
    int helper(vector<int> &nums, int k)
    {
        int n = nums.size();
        int left = 0;
        int right = 0;
        int count = 0;
        unordered_map<int, int> mp;
        while(right < n)
        {
            mp[nums[right]]++;
            while(mp.size() > k)
            {
                mp[nums[left]]--;
                if(mp[nums[left]] == 0)
                {
                    mp.erase(nums[left]);
                }
                left++;
            }
            count += right - left + 1;
            right++;
        }
        return count;
    }
};
