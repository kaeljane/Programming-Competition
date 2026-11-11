class Solution {
public:
    bool achou[40] = {false};
    int memo[40] = {0};
    int fib(int n) {
        if (n == 0) return 0;
        if (n == 1) return 1;

        achou[n] = true;
        return memo[n] = fib(n-1) + fib(n-2);
    }
};