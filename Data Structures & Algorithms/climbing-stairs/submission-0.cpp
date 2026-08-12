class Solution {
public:
    int solve(int ind, vector<int> &dp) {
        if(ind==0) return 1;
        if(ind==1) return 1;
        if(ind<0) return 0;
        if(dp[ind]!= -1) return dp[ind];
        int jumpOne = solve(ind-1, dp);
        int jumpTwo = 0;
        if(ind>1) jumpTwo = solve(ind-2, dp);
        return dp[ind] = jumpOne+jumpTwo;

    }
    int climbStairs(int n) {
        vector<int> dp(n+1, -1);
        return solve(n, dp);
    }
};
