class Solution {
public:
    int minKBitFlips(vector<int>& nums, int k) {
        ios::sync_with_stdio(0);
        cin.tie(0);
        int n = nums.size();
        int curr = 0;
        int ans = 0;
        for(int i = 0; i < n; i++)
        {
            if(i >= k && nums[i-k] > 1)
            {
                curr--;
                nums[i-k] -= 2;
            }
            if(curr % 2 == nums[i])
            {
                if(i+k > n)
                {
                    return -1;
                }
                nums[i] += 2;
                curr++;
                ans++;
            }
        }
        return ans;
    }
};
