class Solution {
public:
    int bestClosingTime(string customers) {
        int n = customers.size();
        int count1 = 0;
        for(int i = 0; i < n; i++)
        {
            if(customers[i] == 'Y')
            {
                count1++;
            }
        }
        int count2 = 0;
        int mini = count1;
        int ans = 0;
        for(int i = 0; i < n; i++)
        {
            if(customers[i] == 'N')
            {
                count2++;
            }
            else
            {
                count1--;
            }
            if(count1 + count2 < mini)
            {
                mini = count1 + count2;
                ans = i + 1;
            }
        }
        return ans;
    }
};
