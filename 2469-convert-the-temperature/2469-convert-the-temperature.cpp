class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        double kelvin = celsius + 273.15;
        double fahrenheit = celsius * 1.8 + 32;
        vector<double> ans={kelvin,fahrenheit};
        return ans;
    }
};