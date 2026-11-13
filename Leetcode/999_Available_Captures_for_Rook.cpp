class Solution {
public:
    bool dentro(int ni, int nj, int n, int m) {
        if (ni >= 0 && ni < n && nj >= 0 && nj < m) return true;
        return false;
    }

    int numRookCaptures(vector<vector<char>>& board) {
        int n = board.size(), m = board[0].size();

        vector<int> di = {-1, 0, 1, 0};
        vector<int> dj = {0, 1, 0, -1};

        int presas = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {

                if (board[i][j] == 'R') {
                    for (int d = 0; d < 4; d++) {
                        int ni = i + di[d];
                        int nj = j + dj[d];

                        while (dentro(ni, nj, n, m)) {
                            if (board[ni][nj] == 'B') {
                                break;
                            }
                            if (board[ni][nj] == 'p') {
                                presas++; break;
                            }

                            ni += di[d];
                            nj += dj[d];
                        }
                    }
                }
            }
        }

        return presas;
    }
};