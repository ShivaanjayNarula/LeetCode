class Solution 
{
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        int i = 0;
        int n = (int)nums.size();
        while(i<n-1)
        {
            int j = i+1;
            while(j < n)
            {
                if(nums[i] + nums[j] == target)
                {
                    return{i,j};
                }
                j++;
            }
            i++;
        }
       return {};
    }
};
