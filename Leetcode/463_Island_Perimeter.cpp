class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size();

        vector<vector<int>> grid2(n+2, vector<int>(m+2, 0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                grid2[i+1][j+1] = grid[i][j];
            }
        }

        // se tiver algum lado com água então faz parte do perimetro

        vector<int> di = {-1, 0, 1, 0};
        vector<int> dj = {0, 1, 0, -1};
        // vector<vector<int>> visitado(n+2, vector<int>(m+2, 0));
        
        int praias = 0;
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {

                if (grid2[i][j] == 1) { // terra
                    for (int d = 0; d < 4; d++) {
                        int ni = i + di[d];
                        int nj = j + dj[d];

                        if (grid2[ni][nj] == 0) { // achou agua
                            praias++;
                        }
                    }
                }
            }
        }

        return praias;

    }
};