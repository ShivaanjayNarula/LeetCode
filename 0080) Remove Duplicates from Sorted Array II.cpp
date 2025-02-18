class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int ans = 0;
        for(int i : nums)
        {
            if(ans < 2 || i > nums[ans-2])
            {
                nums[ans++] = i;
            }
        }
        return ans;
    }
};
