class Solution {
public:
    int minimumSize(vector<int>& nums, int maxOperations) {
        int n = nums.size();
        int left = 1;
        int right = 1e9 + 7;
        while(left < right)
        {
            int mid = (left + right) / 2;
            int count = 0;
            for(int i = 0; i < n; i++)
            {
                count += (nums[i] - 1) /mid;
            }
            if(count > maxOperations)
            {
                left = mid + 1;
            }
            else
            {
                right = mid;
            }
        }
        return left;
    }
};
