class Solution {
public:
    string defangIPaddr(string address) {
        string ans;
        int n = address.size();
        for(int i = 0; i < n; i++)
        {
            if(address[i] != '.')
            {
                ans = ans + address[i];
            }
            else
            {
                ans = ans + "[.]";
            }
        }
        return ans;
    }
};
