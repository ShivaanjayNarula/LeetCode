class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int new_index = 0;
        int n = nums.size();
        for(int i = 0; i <n; i++)
        {
            if(nums[i] != val)
            {
                nums[new_index] = nums[i];
                new_index = new_index + 1;
            }
        }
        return new_index;
    }
};
