class Solution {
public:
    int maxConsecutiveAnswers(string answerKey, int k) {
        int n = answerKey.size();
        int ans = 0;
        int check = 0;
        unordered_map<int, int> mp;
        for(int i = 0; i < n; i++)
        {
            check = max(check, ++mp[answerKey[i]]);
            if(ans - check < k)
            {
                ans++;
            }
            else
            {
                mp[answerKey[i-ans]]--;
            }
        }
        return ans;
    }
};
