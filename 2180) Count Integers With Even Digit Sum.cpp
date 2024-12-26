class Solution {
public:
    int countEven(int num) {
        int ans = 0;
        for(int i = 1; i <= num; i++)
        {
            int temp = i;
            int count = 0;
            while(temp != 0)
            {
                count += temp % 10;
                temp /= 10;
            }
            if(count % 2 == 0)
            {
                ans++;
            }
        }
        return ans;
    }
};
