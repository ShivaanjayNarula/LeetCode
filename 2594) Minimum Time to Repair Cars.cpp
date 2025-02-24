class Solution {
public:
    long long repairCars(vector<int>& ranks, int cars) {
        int n = ranks.size();
        long long left = 1;
        long long right = 1e14;
        while(left < right)
        {
            long long mid = (left + right) / 2;
            long long count = 0;
            for(int i = 0; i < n; i++)
            {
                count += sqrt(mid / ranks[i]);
            }
            if(count >= cars)
            {
                right = mid;
            }
            else
            {
                left = mid + 1;
            }
        }
        return left;
    }
};
