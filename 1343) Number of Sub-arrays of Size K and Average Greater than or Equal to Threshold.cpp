class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int n = arr.size();
        int left = 0;
        int right = 0;
        int ans = 0;
        int sum = 0;
        while(right < n)
        {
            sum += arr[right];
            if(right - left + 1 == k)
            {
                if(sum/k >= threshold)
                {
                    ans++;
                }
                sum -= arr[left];
                left++;
            }
            right++;
        }
        return ans;
    }
};
