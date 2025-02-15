class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        int n = deck.size();
        if(n < 2)
        {
            return false;
        }
        unordered_map<int, int> mp;
        for(int i = 0; i < n; i++)
        {
            mp[deck[i]]++;
        }
        int check = 0;
        for(auto i : mp)
        {
            check = gcd(check, i.second);
        }
        if(check >= 2)
        {
            return true;
        }
        return false;
    }
    // int gcd(int a, int b)
    // {
    //     while(b != 0)
    //     {
    //         int temp = b;
    //         b = a % b;
    //         a = temp;
    //     }
    //     return a;
    // }
};
