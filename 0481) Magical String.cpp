class Solution {
public:
    int magicalString(int n) {
        if(n == 0)
        {
            return 0;
        }
        int ans = 1;
        queue<int> q;
        q.push(2);
        for(int i = 2; i < n; i++)
        {
            int num = q.front();
            q.pop();
            if(num == 1)
            {
                ans++;
            }
            int check;
            if(q.back() == 2)
            {
                check = 1;
            }
            else
            {
                check = 2;
            }
            for(int j = 0; j < num; j++)
            {
                q.push(check);
            }
        }
        return ans;
    }
};
