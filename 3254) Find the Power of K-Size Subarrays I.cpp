class Solution {
public:
    vector<int> resultsArray(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> ans;
        int count = 1;
        int check = 0;
        for(int i = 0; i < n; i++)
        {
            if(i > 0 && nums[i] == nums[i-1]+1)
            {
                count++;
            }
            if(i - check + 1 > k)
            {
                if(nums[check] + 1 == nums[check+1])
                {
                    count--;
                }
                check++;
            }
            if(i - check + 1 == k)
            {
                if(count == k)
                {
                    ans.push_back(nums[i]);
                }
                else
                {
                    ans.push_back(-1);
                }
            }
        }
        return ans;
    }
};
