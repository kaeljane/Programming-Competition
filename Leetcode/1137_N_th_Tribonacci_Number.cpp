class Solution {
public:
    bool achou[40] = {false};
    int memo[40] = {0};

    int tribonacci(int n) {
        if (achou[n]) return memo[n];
        if (n == 0) return 0;
        if (n == 1) return 1;
        if (n == 2) return 1;

        achou[n] = true;
        return memo[n] = tribonacci(n-1) + tribonacci(n-2) + tribonacci(n-3);

    }
};