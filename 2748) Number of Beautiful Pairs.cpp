class Solution {
public:
    int countBeautifulPairs(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        for(int i = 0; i < n; i++)
        {
            for(int j = i+1; j < n; j++)
            {
                int first = firstdigit(nums[i]);
                int last = lastdigit(nums[j]);
                if(gcd(first, last) == 1)
                {
                    ans++;
                }
            }
        }
        return ans;
    }

    int firstdigit(int a)
    {
        while(a >= 10)
        {
            a /= 10;
        }
        return a;
    }

    int lastdigit(int a)
    {
        return a % 10;
    }

    int gcd(int a, int b)
    {
        int check = min(a, b);
        while(check > 0)
        {
            if(a % check == 0 && b % check == 0)
            {
                break;
            }
            check--;
        }
        return check;
    }
};
