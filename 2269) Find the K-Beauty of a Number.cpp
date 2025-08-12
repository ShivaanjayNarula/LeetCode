class Solution {
public:
    int divisorSubstrings(int num, int k) {
        string s = to_string(num);
        int n = s.size();
        int i = 0;
        int j = 0;
        int ans = 0;
        while(j < n)
        {
            if(j-i+1 < k)
            {
                j++;
            }
            else if(j-i+1 == k)
            {
                int check = stoi(s.substr(i, k));
                if(check != 0 && num % check == 0)
                {
                    ans++;
                }
                i++;
                j++;
            }
        }
        return ans;
    }
};
