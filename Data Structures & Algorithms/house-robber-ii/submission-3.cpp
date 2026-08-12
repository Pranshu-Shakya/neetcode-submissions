class Solution {
public:
    int solve(int i, vector<int> nums, vector<int> &dp, int start) {
        if(i<start) return 0; 
        if(dp[i]!=-1) return dp[i];
        int pick = nums[i]+solve(i-2, nums, dp, start);
        int notPick = solve(i-1, nums, dp, start);
        return dp[i] = max(pick, notPick);
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n==1) return nums[0];
        vector<int> dp1(n, -1);
        vector<int> dp2(n, -1);
        return max(solve(n-1, nums, dp1, 1), solve(n-2, nums, dp2, 0));
    }
};
