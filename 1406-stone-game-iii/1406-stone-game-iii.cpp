class Solution {
public:
    
    int solveMem(vector<int> &nums, int i, vector<int> &dp) {
        if(i >= nums.size()) return 0;

        int choice1 = INT_MIN, choice2 = INT_MIN, choice3 = INT_MIN;

        if(dp[i] != -1) return dp[i];

        choice1 = nums[i] + min(solveMem(nums, i + 2, dp), min(solveMem(nums, i + 3, dp), solveMem(nums, i + 4, dp)));
        if(i + 1 < nums.size())
            choice2 = nums[i] + nums[i + 1] + min(solveMem(nums, i + 3, dp), min(solveMem(nums, i + 4, dp), solveMem(nums, i + 5, dp)));
        if(i + 2 < nums.size())
            choice3 = nums[i] + nums[i + 1] + nums[i + 2] + min(solveMem(nums, i + 4, dp), min(solveMem(nums, i + 5, dp), solveMem(nums, i + 6, dp)));

        return dp[i] = max(choice1, max(choice2, choice3)); 
    }
    
    string stoneGameIII(vector<int>& stoneValue) {
        vector<int> dp(stoneValue.size(), -1);
        int alice = solveMem(stoneValue, 0, dp);

        int sum = 0;
        for(int i = 0; i < stoneValue.size(); i++) {
            sum += stoneValue[i];
        }
        if(alice > sum - alice) return "Alice";
        else if(alice < sum - alice) return "Bob";
        else return "Tie";
    }
};