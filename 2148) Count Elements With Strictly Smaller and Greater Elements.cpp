class Solution {
public:
    int countElements(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        int max = *max_element(nums.begin(), nums.end());
        int min = *min_element(nums.begin(), nums.end());
        int i = 0;
        while(i < n)
        {
            if(nums[i] > min && nums[i] < max)
            {
                ans++;
            }
            i++;
        }
        return ans;
    }
};
