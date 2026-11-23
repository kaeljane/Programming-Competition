class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        
        vector<int> segurando(n+1, 0);
        vector<int> vendeu(n+1, 0);
        vector<int> livre(n+1, 0);

        segurando[0] = -prices[0];
        // comprar vender descanso
        for (int i = 1; i <= n; i++) {
            int x = prices[i-1];
            // transicoes
            segurando[i] = max(segurando[i-1], livre[i-1] - x);
            vendeu[i] = segurando[i-1] + x;
            livre[i] = max(livre[i-1], vendeu[i-1]);
            
        }

        return max(vendeu[n], livre[n]);

    }
};