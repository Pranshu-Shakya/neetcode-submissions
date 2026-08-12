class Solution {
public:
    int solve(int i, vector<int> &dp, vector<int> cost) {
        if(i==0) return cost[0];
        if(i==1) return cost[1];
        if(dp[i]!=-1) return dp[i];
        int jumpOne = cost[i]+solve(i-1, dp, cost);
        int jumpTwo = cost[i]+solve(i-2, dp, cost);
        return dp[i] = min(jumpOne, jumpTwo);
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        vector<int> dp(n, -1);
        int one = solve(n-1, dp, cost);
        int two = solve(n-2, dp, cost);
        return min(one, two);
    }
};
