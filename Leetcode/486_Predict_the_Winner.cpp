class Solution {
public:
    bool predictTheWinner(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> dp(n, vector<int>(n, 0));
        // caso base? tu escreveu e esqueceu de colocar pcr
        for (int i = 0; i < n; i++) {
            dp[i][i] = nums[i];
        }

        for (int len = 2; len <= n; len++) {
            for (int l = 0; l + len - 1 < n; l++) {
                int r = l + len - 1;
                // intervalo!!
                dp[l][r] = max(nums[l] - dp[l+1][r], 
                               nums[r] - dp[l][r-1]);
            }
        }

        return dp[0][n-1] >= 0;
    }
};