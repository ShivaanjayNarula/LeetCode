class Solution {
public:
    int minTimeToType(string word) {
        int n = word.size();
        int ans = n;
        int start = 0;
        for(int i = 0; i < n; i++)
        {
            int curr = word[i] - 'a';
            ans += min(abs(start - curr), 26 - abs(start - curr));
            start = curr;
        }
        return ans;
    }
};
