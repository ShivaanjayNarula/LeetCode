class Solution {
public:
    int countSubstrings(string s) {
        int n = s.size();
        int ans = 0;
        for(int i = 0; i < n; i++)
        {
            ans += palindrome(s, i, i);
            ans += palindrome(s, i, i+1);
        }
        return ans;
    }
    int palindrome(string s, int left, int right)
    {
        int n = s.size();
        int count = 0;
        while(left >= 0 && right < n && s[left] == s[right])
        {
            left--;
            right++;
            count++;
        }
        return count;
    }
};

        /*int n = s.size();
        vector<string> arr;
        for(int i = 0; i < n; i++)
        {
            for(int j = i+1; j <= n; j++)
            {
                arr.push_back(s.substr(i, j-i));
            }
        }
        int ans = 0;
        for(const string& i : arr)
        {
            if(i == string(i.rbegin(), i.rend()))
            {
                ans++;
            }
        }
        return ans;*/
