class Solution {
public:
    
    void solve(vector<int> &dp, int i , vector<int> &target){
        if (i == 0)
        dp[i] = target[0];
    else if (target[i - 1] <= target[i])
        dp[i] = dp[i - 1] + (target[i] - target[i - 1]);
    else
        dp[i] = dp[i - 1];
         if (i + 1 < target.size())
        solve(dp, i + 1, target);
    }
    
    int minNumberOperations(vector<int>& target) {
        int n = target.size();
        vector<int> dp(n,0);
        solve(dp,0,target);
        return dp[n-1];
    }
};