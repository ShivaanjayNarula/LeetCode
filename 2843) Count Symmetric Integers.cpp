class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int ans = 0;
        for(int i = low; i <= high; i++)
        {
            string s = to_string(i);
            int n = s.size();
            int check = 0;
            for(int j = 0; j < n/2; j++)
            {
                check += s[j] - s[n-j-1];
            }
            if(n % 2 == 0 && check == 0)
            {
                ans++;
            }
        }
        return ans;
    }
};
