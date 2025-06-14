class Solution {
    public int[] findIndices(int[] nums, int indexDifference, int valueDifference) {
        int n = nums.length;
        for(int i = 0; i + indexDifference < n; i++)
        {
            for(int j = i+indexDifference; j < n; j++)
            {
                if(Math.abs(nums[i] - nums[j]) >= valueDifference)
                {
                    return new int[] {i, j};
                }
            }
        }
        return new int[] {-1, -1};
    }
}
