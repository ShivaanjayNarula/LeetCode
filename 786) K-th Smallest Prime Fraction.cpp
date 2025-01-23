class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
        vector<float> check;
        int n = arr.size();
        for(int i= 0; i < n; i++)
        {
            for(int j = i+1; j < n; j++)
            {
                check.push_back(((float)arr[i]/(float)arr[j]));
            }
        }
        sort(check.begin(), check.end());
        for(int i = 0; i < n; i++)
        {
            for(int j = i+1; j < n; j++)
            {
                if(check[k-1] == (float)arr[i]/(float)arr[j])
                {
                    return {arr[i], arr[j]};
                }
            }
        }
        return {};
    }
};
