class Solution {
public:
    int countLargestGroup(int n) {
        vector<int> count(37, 0);
        for(int i = 1; i <= n; i++)
        {
            count[calculate(i)]++;
        }
        int ans = 0;
        int maxi = *max_element(count.begin(), count.end());
        for(int i = 0; i < 37; i++)
        {
            if(count[i] == maxi)
            {
                ans++;
            }
        }
        return ans;
    }
    int calculate(int n)
    {
        int ans = 0;
        while(n != 0)
        {
            ans += n % 10;
            n /= 10;
        }
        return ans;
    }
};
