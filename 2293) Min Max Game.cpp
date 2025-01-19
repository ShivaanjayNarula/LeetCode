class Solution {
public:
    int minMaxGame(vector<int>& nums) {
        int n = nums.size();
        while(n > 1)
        {
            vector<int> new_nums;
            int check;
            for(int i = 0; i < n/2; i++)
            {
                if(i % 2 == 0)
                {
                    check = min(nums[2*i], nums[2*i+1]);
                }
                else
                {
                    check = max(nums[2*i], nums[2*i+1]);
                }
                new_nums.push_back(check);
            }
            nums = new_nums;
            n -= 2;
        }
        return nums[0];
    }
};
