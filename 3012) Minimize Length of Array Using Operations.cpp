class Solution {
public:
    int minimumArrayLength(vector<int>& nums) {
        int n = nums.size();
        int small = *min_element(nums.begin(), nums.end());
        int count = 0;
        for(int i = 0; i < n; i++)
        {
            if(nums[i] == small)
            {
                count++;
            }
            else if(nums[i] % small != 0)
            {
                return 1;
            }
        }
        return (count+1)/2;
    }
};
