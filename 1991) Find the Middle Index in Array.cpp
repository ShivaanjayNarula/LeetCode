class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        for(int i = 0; i < n; i++)
        {
            sum += nums[i];
        }
        int add = 0;
        for(int i = 0; i < n; i++)
        {
            sum -= nums[i];
            if(sum == add)
            {
                return i;
            }
            add += nums[i];
        }
        return -1;
    }
};
