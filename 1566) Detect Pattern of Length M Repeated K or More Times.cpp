class Solution {
public:
    bool containsPattern(vector<int>& arr, int m, int k) {
        int n = arr.size();
        int count = 0;
        for(int i = 0; i+m < n; i++)
        {
            if(arr[i] != arr[i+m])
            {
                count = 0;
            }
            if(arr[i] == arr[i+m])
            {
                count++;
            }
            if(count == (k-1) * m)
            {
                return true;
            }
        }
        return false;
    }
};
