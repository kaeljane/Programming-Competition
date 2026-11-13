class Solution {
public:
    bool dentro(int ni, int nj, int n, int m) {
        if (ni >= 0 && ni < n && nj >= 0 && nj < m) return true;
        return false;
    }
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {

        int n = img.size(), m = img[0].size();
        vector<int> di = {-1, -1, -1, 0, 1, 1, 1, 0};
        vector<int> dj = {-1, 0, 1, 1, 1, 0, -1, -1};
        vector<vector<int>> res(n, vector<int>(m, 0));

        for (int i = 0 ; i < n; i++) {
            for (int j = 0; j < m; j++) {
                int qtCasas = 0;
                int soma = 0;
                for (int d = 0; d < 8; d++) {
                    int ni = i + di[d];
                    int nj = j + dj[d];

                    if (dentro(ni, nj, n, m)) {
                        qtCasas++;
                        soma += img[ni][nj];
                    }
                }
                res[i][j] = (soma + img[i][j]) / (qtCasas+1);
            }
        }
        return res;
    }
};