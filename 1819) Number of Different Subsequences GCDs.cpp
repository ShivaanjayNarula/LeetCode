class Solution {
public:
    int countDifferentSubsequenceGCDs(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        int maxi = *max_element(nums.begin(), nums.end());
        vector<int> freq(maxi+1, 0);
        for(int i = 0; i < n; i++)
        {
            freq[nums[i]]++;
        }
        for(int i = 1; i <= maxi; i++)
        {
            int check = 0;
            for(int j = i; j <= maxi; j+= i)
            {
                if(freq[j] > 0)
                {
                    check = gcd(check, j);
                }
                if(check == i)
                {
                    ans++;
                    break;
                }
            }
        }
        return ans;
    }
};
