class Solution {
public:
    int minSteps(string s, string t) {
        unordered_set<char> map(s.begin(), s.end());
        int ans = 0;
        for(char ch : map)
        {
            int count1 = count(s.begin(), s.end(), ch);
            int count2 = count(t.begin(), t.end(), ch);
            if(count1 > count2)
            {
                ans += count1-count2;
            }
        }
        return ans;
    }
};
