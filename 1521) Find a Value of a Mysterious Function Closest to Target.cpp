class Solution {
public:
    int closestToTarget(vector<int>& arr, int target) {
        int ans = 1e7+7;
        int n = arr.size();
        for(int i = 0; i < n; i++)
        {
            ans = min(ans, abs(arr[i] - target));
            for(int j = i-1; j >= 0 && arr[j] != (arr[j] & arr[i]); j--)
            {
                arr[j] &= arr[i];
                ans = min(ans, abs(arr[j] - target));
            }
        }
        return ans;
    }
};
