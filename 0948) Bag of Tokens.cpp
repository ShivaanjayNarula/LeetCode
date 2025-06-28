class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        int n = tokens.size();
        sort(tokens.begin(), tokens.end());
        int ans = 0;
        int left = 0;
        int right = n-1;
        int count = 0;
        while(left <= right)
        {
            if(tokens[left] <= power)
            {
                power -= tokens[left];
                left++;
                count++;
                ans = max(ans, count);
            }
            else if(count > 0)
            {
                power += tokens[right];
                count--;
                right--;
            }
            else
            {
                break;
            }
        }
        return ans;
    }
};
