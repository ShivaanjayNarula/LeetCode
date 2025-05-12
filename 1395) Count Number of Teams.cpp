class Solution {
public:
    int numTeams(vector<int>& rating) {
        int n = rating.size();
        int ans = 0;
        for(int i = 1; i < n-1; i++)
        {
            int count1 = 0;
            int count2 = 0;
            int count3 = 0;
            int count4 = 0;
            for(int j = 0; j < i; j++)
            {
                if(rating[i] > rating[j])
                {
                    count1++;
                }
                else if(rating[i] < rating[j])
                {
                    count2++;
                }
            }
            for(int j = i+1; j < n; j++)
            {
                if(rating[i] > rating[j])
                {
                    count3++;
                }
                else if(rating[i] < rating[j])
                {
                    count4++;
                }
            }
            ans += (count1 * count4) + (count2 * count3);
        }
        return ans;
    }
};
