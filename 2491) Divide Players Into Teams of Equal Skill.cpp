class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        int n = skill.size();
        sort(skill.begin(), skill.end());
        long long ans = 0;
        long long check = skill[0] + skill[n-1];
        int left = 0;
        int right = n-1;
        while(left < right)
        {
            long long diff = skill[left] + skill[right];
            if(diff != check)
            {
                return -1;
            }
            ans += skill[left] * skill[right];
            left++;
            right--;
        }
        return ans;
    }
};
