class Solution {
public:
    double mincostToHireWorkers(vector<int>& quality, vector<int>& wage, int k) {
        int n = quality.size();
        vector<pair<double, int>> ratio;
        for(int i = 0; i < n; i++)
        {
            double check = (double)wage[i] / (double)quality[i];
            ratio.push_back({check, quality[i]});
        }
        sort(ratio.begin(), ratio.end());
        int sum = 0;
        vector<int> nums;
        for(int i = 0; i < k; i++)
        {
            sum += ratio[i].second;
            nums.push_back(ratio[i].second);
        }
        double cost = sum * ratio[k - 1].first;
        for(int i = k; i < n; i++)
        {
            nums.push_back(ratio[i].second);
            sum += ratio[i].second;
            int id = max_element(nums.begin(), nums.end()) - nums.begin();
            sum -= nums[id];
            nums.erase(nums.begin() + id);
            cost = min(cost, sum * ratio[i].first);
        }
        return cost;
    }
};
