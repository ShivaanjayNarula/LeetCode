class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int n = arr.size();
        int a = n/4;
        for(int i = 0; i < n-a; i++)
        {
            if(arr[i] == arr[i+a])
            {
                return arr[i];
            }
        }
        return 0;
    }
};
