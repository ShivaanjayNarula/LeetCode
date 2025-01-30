class Solution {
public:
    int countTriplets(vector<int>& arr) {
        int n = arr.size();
        int ans = 0;
        unordered_map<int, int> count;
        unordered_map<int, int> total;
        int check = 0;
        for(int i = 0; i < n; i++)
        {
            if(count.find(check ^ arr[i]) != count.end());
            {
                ans += count[check ^ arr[i]] * i - total[check ^ arr[i]];
            }
            count[check]++;
            total[check]+=i;
            check ^= arr[i];
        }
        return ans;
    }
};
