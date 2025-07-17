class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        int n = arr.size();
        int ans = 0;
        int odd = 0;
        int even = 0;
        int mod = 1e9 + 7;
        for(int i = 0; i < n; i++)
        {
            even += 1;
            if(arr[i] % 2 != 0)
            {
                swap(odd, even);
            }
            ans = (ans + odd) % mod;
        }
        return ans;
    }
};
