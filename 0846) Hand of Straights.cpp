class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        int n = hand.size();
        if(n % groupSize != 0)
        {
            return false;
        }
        map<int, int> mp;
        for(int i = 0; i < n; i++)
        {
            mp[hand[i]]++;
        }
        while(mp.size() > 0)
        {
            int i = mp.begin()->first;
            for(int j = i; j < i+groupSize; j++)
            {
                if(mp[j] == 0)
                {
                    return false;
                }
                mp[j]--;
                if(mp[j] == 0)
                {
                    mp.erase(j);
                }
            }
        }
        return true;
    }
};
