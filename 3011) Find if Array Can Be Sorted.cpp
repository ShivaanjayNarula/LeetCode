class Solution {
public:
    bool canSortArray(vector<int>& nums) {
        int n = nums.size();
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n-i-1; j++)
            {
                int count1 = countBits(nums[j]);
                int count2 = countBits(nums[j+1]);
                if(count1 == count2 && nums[j] > nums[j+1])
                {
                    swap(nums[j], nums[j+1]);
                }
            }
        }
        for(int i = 1; i < n; i++)
        {
            if(nums[i] < nums[i-1])
            {
                return false;
            }
        }
        return true;
    }
    int countBits(int n)
    {
        int bits = 0;
        while(n > 0)
        {
            bits++;
            n &= (n-1);
        }
        return bits;
    }
};
