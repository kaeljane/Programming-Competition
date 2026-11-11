class Solution {
public:
    int change(int amount, vector<int>& coins) {
        const int INF = 1e9;

        vector<unsigned int> dp(amount + 1, 0);
        dp[0] = 1;
        for (int c : coins) {
            for (int s = c; s <= amount; s++) {
                dp[s] += dp[s-c];
            }
        }

        return dp[amount];

    }
};