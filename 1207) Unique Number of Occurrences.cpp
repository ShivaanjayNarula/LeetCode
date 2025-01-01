class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int n = arr.size();
        sort(arr.begin(), arr.end());
        vector<int> check;
        for(int i = 0; i < n; i++)
        {
            int count = 1;
            while(i+1 < n && arr[i] == arr[i+1])
            {
                count++;
                i++;
            }
            check.push_back(count);
        }
        sort(check.begin(), check.end());
        int m = check.size();
        for(int i = 0; i < m-1; i++)
        {
            if(check[i] == check[i+1])
            {
                return false;
            }
        }
        return true;
    }
};
