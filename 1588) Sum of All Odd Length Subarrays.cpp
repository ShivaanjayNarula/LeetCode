class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) 
    {
        int n = arr.size();
        for(int i = 1; i < n; i++)
        {
            arr[i] += arr[i-1];
        }
        int ans=0;
        for(int i = 1;i <= n; i += 2)
        {
            for(int j = 0; j + i - 1 < n; j++)
            {
                ans += arr[j+i-1];
                if(j != 0)
                {
                    ans -= arr[j-1];
                }
            }
        }
        return ans;
    }
};
