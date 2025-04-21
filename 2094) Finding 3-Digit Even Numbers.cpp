class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        vector<int> ans;
        vector<int> prefixSum(10, 0);
        for(auto i : digits)
        {
            prefixSum[i]++;
        }
        for(int i = 100; i <= 999; i += 2)
        {
            vector<int> sum(10, 0);
            int temp = i;
            while(temp)
            {
                sum[temp % 10]++;
                temp /= 10;
            }
            bool check = true;
            for(int i = 0; i < 10; i++)
            {
                if(sum[i] > prefixSum[i])
                {
                    check = false;
                    break;
                }
            }
            if(check)
            {
                ans.push_back(i);
            }
        }
        return ans;
    }
};
