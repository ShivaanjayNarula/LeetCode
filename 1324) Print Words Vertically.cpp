class Solution {
public:
    vector<string> printVertically(string s) {
        int n = s.size();
        vector<string> temp;
        vector<string> ans;
        for(int i = 0; i < n; i++)
        {
            string temp1;
            while(i < n && s[i] != ' ')
            {
                temp1 += s[i];
                i++;
            }
            temp.push_back(temp1);
        }
        int n1 = temp.size();
        int maxlen = 0;
        for(int i = 0; i < n1; i++)
        {
            maxlen = max(maxlen, (int)temp[i].size());
        }
        for(int i = 0; i < n1; i++)
        {
            while(temp[i].size() < maxlen)
            {
                temp[i] += ' ';
            }
        }
        for(int i = 0; i < maxlen; i++)
        {
            string temp1 = "";
            for(int j = 0; j < n1; j++)
            {
                temp1 += temp[j][i];
            }
            while(!temp1.empty() && temp1.back() == ' ')
            {
                temp1.pop_back();
            }
            ans.push_back(temp1);
        }
        return ans;
    }
};
