class Solution {
public:
    #define ll long long 
    string stoneGameIII(vector<int>& v) {
        ll n = v.size();

        vector<int> dp(n + 1, 0);
        // caso base?
        dp[0] = v[0];
        for (int i = n-1; i >= 0; i--) {
            int soma = 0; 
            dp[i] = -100000;
            for (int k = 1; k <= 3 && i + k <= n; k++) {
                soma += v[i + k - 1];
                dp[i] = max(dp[i], soma - dp[i + k]);
            }
        }

        if (dp[0] > 0) return "Alice";
        if (dp[0] < 0) return "Bob";
        return "Tie";

    }
};