class Solution {
public:
    vector<int> getStrongest(vector<int>& arr, int k) {
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        int n = arr.size();
        sort(arr.begin(), arr.end());
        int left = 0;
        int right = n-1;
        int mid = (n-1)/2;
        vector<int> ans;
        for(int i = 0; i < k; i++)
        {
            if(abs(arr[right] - arr[mid]) >= abs(arr[left] - arr[mid]))
            {
                ans.push_back(arr[right]);
                right--;
            }
            else
            {
                ans.push_back(arr[left]);
                left++;
            }
        }
        return ans;
    }
};
