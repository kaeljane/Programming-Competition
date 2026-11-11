class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        const int INF = 1e9;
        vector<int> dp(amount + 1, 1e9);

        dp[0] = 0;

        for (int s = 1; s <= amount; s++) 
            for (int c : coins) 
                if (s >= c && dp[s - c] != INF) 
                    dp[s] = min(dp[s], dp[s-c] + 1);

        if (dp[amount] == INF) return -1;
        return dp[amount];
    }
};