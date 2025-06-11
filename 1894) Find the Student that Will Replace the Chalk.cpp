class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        int n = chalk.size();
        k %= accumulate(chalk.begin(), chalk.end(), 0l);
        for(int i = 0; i < n; i++)
        {
            if(k - chalk[i] < 0)
            {
                return i;
            }
            k -= chalk[i];
        }
        return n-1;
    }
};
