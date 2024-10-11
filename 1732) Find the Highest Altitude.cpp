class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n = gain.size();
        int arr[n+1];
        arr[0] = 0;
        int ans = arr[0];
        for(int i = 1; i <= n; i++)
        {
            arr[i] = gain[i-1] + arr[i-1];
            ans = max(ans, arr[i]);
        }
        
        return ans;
    }
};
