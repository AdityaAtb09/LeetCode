class Solution {
public:
    vector<int> longestObstacleCourseAtEachPosition(vector<int>& obstacles) {
        int n = obstacles.size();
        vector<int> res(n);
        vector<int> dp; 

        for (int i = 0; i < n; ++i) {
            int lo = 0, hi = dp.size() - 1;
            while (lo <= hi) {
                int mid = lo + (hi - lo) / 2;
                dp[mid] <= obstacles[i] ? lo = mid + 1 : hi = mid - 1;
            }
            if (lo == dp.size()) dp.emplace_back(obstacles[i]);
            else dp[lo] = obstacles[i];
            res[i] = lo + 1;
        }

        return res;
    }
};