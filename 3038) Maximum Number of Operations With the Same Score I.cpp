class Solution {
public:
    int maxOperations(vector<int>& nums) {
        int n = nums.size();
        int check = nums[0] + nums[1];
        int ans = 0;
        for(int i = 0; i < n-1; i+=2)
        {
            if(check == nums[i] + nums[i+1])
            {
                ans++;
            }
            else
            {
                break;
            }
        }
        return ans;
    }
};
