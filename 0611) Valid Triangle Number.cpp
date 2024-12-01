class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        int n = nums.size();
        sort(nums.rbegin(), nums.rend());
        int ans = 0;
        for(int i = 0; i < n; i++)
        {
            int j = i+1;
            int k = n-1;
            while(j < k)
            {
                int a = nums[i], b = nums[j], c = nums[k];
                if(b+c > a)
                {
                    ans += k-j;
                    j++;
                }
                else
                {
                    k--;
                }
            }
        }
        return ans;
    }
};
