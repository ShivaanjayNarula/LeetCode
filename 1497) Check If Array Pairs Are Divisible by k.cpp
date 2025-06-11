class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        int n = arr.size();
        vector<int> check(k, 0);
        for(int i = 0; i < n; i++)
        {
            int num = ((arr[i] % k) + k) % k;
            check[num]++;
        }
        for(int i = 0; i < k; i++)
        {
            if(i == 0 || i == (k-i))
            {
                if(check[i] & 1)
                {
                    return false;
                }
            }
            else if(check[i] != check[k-i])
            {
                return false;
            }
        }
        return true;
    }
};
