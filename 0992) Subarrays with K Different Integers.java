class Solution {
    public int subarraysWithKDistinct(int[] nums, int k) {
        int n = nums.length;
        int count1 = helper(nums, k);
        int count2 = helper(nums, k-1);
        int ans = count1 - count2;
        return ans;
    }
    public int helper(int[] nums, int k)
    {
        int n = nums.length;
        int left = 0;
        int right = 0;
        int count = 0;
        Map<Integer, Integer> mp = new HashMap<>();
        while(right < n)
        {
            mp.put(nums[right], mp.getOrDefault(nums[right], 0) + 1);
            while(mp.size() > k)
            {
                mp.put(nums[left], mp.get(nums[left]) - 1);
                if(mp.get(nums[left]) == 0)
                {
                    mp.remove(nums[left]);
                }
                left++;
            }
            count += right - left + 1;
            right++;
        }
        return count;
    }
}
