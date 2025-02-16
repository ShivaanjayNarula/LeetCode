class Solution {
public:
    int maximumCandies(vector<int>& candies, long long k) {
        int left = 1;
        int right = *max_element(candies.begin(), candies.end()) + 1;
        while(left < right)
        {
            long long sum = 0;
            int mid = (left + right)/2;
            for(auto i : candies)
            {
                sum += i / mid;
            }
            if(k > sum)
            {
                right = mid;
            }
            else
            {
                left = mid + 1;
            }
        }
        return left - 1;
    }
};
