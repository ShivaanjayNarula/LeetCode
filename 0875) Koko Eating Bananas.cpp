class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int left = 1;
        int right = 1000000000;
        while(left < right)
        {
            int mid = (left + right) / 2;
            int check = 0;
            for(auto i : piles)
            {
                check += (i + mid - 1) / mid;
            }
            if(check > h)
            {
                left = mid + 1;
            }
            else
            {
                right = mid;
            }
        }
        return left;
    }
};
