class Solution {
public:
    int compress(vector<char>& chars) {
        string ans = "";
        int n = chars.size();
        for(int i = 0; i < n; i++)
        {
            int count = 1;
            int k = i;
            while(i+1 < n)
            {
                if(chars[i] != chars[i+1])
                {
                    break;
                }
                i++;
                count++;
            }
            ans += chars[k];
            if(count > 1)
            {
                ans += to_string(count);
            }
        }
        chars.clear();
        int m = ans.size();
        for(int i = 0; i < m; i++)
        {
            chars.push_back(ans[i]);
        }
        //n = chars.size();
        return chars.size();
    }
};
