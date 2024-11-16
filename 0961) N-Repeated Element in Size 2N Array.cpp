class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int n = nums.size();
        int ans;
        for(int i = 0; i < n; i++)
        {
            int count = 1;
            for(int j = i + 1; j < n; j++)
            {
                if(nums[i] == nums[j])
                {
                    count++;
                }
            }
            if(count == n/2)
            {
                ans = nums[i];
                break;
            }
        }
        return ans;
    }
};
