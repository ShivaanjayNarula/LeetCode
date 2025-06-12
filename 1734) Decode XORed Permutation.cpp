class Solution {
public:
    vector<int> decode(vector<int>& encoded) {
        int n = encoded.size();
        int check = 0;
        for(int i = 0; i <= n+1; i++)
        {
            check ^= i;
            if(i < n && i % 2 == 1)
            {
                check ^= encoded[i];
            }
        }
        vector<int> ans = {check};
        for(auto i : encoded)
        {
            ans.push_back(ans.back() ^ i);
        }
        return ans;
    }
};
