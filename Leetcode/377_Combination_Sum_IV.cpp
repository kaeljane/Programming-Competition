class Solution {
public:
    int combinationSum4(vector<int>& nums, int target) {
        int n = nums.size();
        vector<unsigned int> dp(target+1, 0);
        dp[0] = 1;
        for (int s = 1; s <= target; s++) {
            for (int x : nums) {
                if (s >= x) dp[s] += dp[s - x];
            }
        }    
        return (int)dp[target];
    }
};