class Solution {
public:
    vector<double> convertTemperature(double C) {
        double K, F;
        K = C + 273.15;
        F = C * 1.80 + 32.00;
        vector<double> ans;
        ans.push_back(K);
        ans.push_back(F);
        return ans;
    }
};
