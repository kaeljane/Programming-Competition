// ------------ Repetition repetition repetition repetition repetition repet... ------------
#include <bits/stdc++.h>
#define ll long long
#define ii pair<ll, ll>
#define vl vector<long long>
#define vll vector<vector<long long>>
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define soma(v) accumulate(all(v), 0LL)
#define max_el(v) *max_element(all(v))
#define min_el(v) *min_element(all(v))
#define f(i,b,e) for (ll i = (b); i < (e); i++)
#define rf(i,b,e) for (ll i = (b); i >= (e); i--)
#define fi first
#define pb push_back
#define pf push_front
#define ppb pop_back
#define ppf pop_front
#define sec second
#define el '\n'
#define imp(v, t, e) copy(v.begin(), v.end(), ostream_iterator<t> (cout, e))
#define uset unordered_set
#define ___ ios::sync_with_stdio(false); cin.tie(nullptr);
// 27/07/2026 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7; // 998244353;
ll INF = 1e18 + 7;
const int MAXN = 1e5 + 5;
// matriz vll mat(n, vl(m, 0))

ll n, t, k, x, y, z, ans, m, vazios;
string s, a, b, c;

/* (mind) 
    Time: 46min 14sec
    Padrão: matriz, dfs, propagacao, flood fill
    
*/
void solve() {
    cin>>n>>m>>k;
    
    vector<string> mat(n);
    f (i,0,n) cin>>mat[i];

    f (i,0,n) {
        f (j,0,m) {
            if (mat[i][j] == '.') {
                vazios++;
            }
        }
    }

    ll qt = vazios - k;

    vector<vector<bool>> vis(n, vector<bool>(m, false));

    vector<ll> dl = {-1, 0, 0, 1};
    vector<ll> dc = {0, -1, 1, 0};

    function<void(ll, ll)> dfs_grid = [&](ll linha, ll coluna) {
        if (qt <= 0) return;
        vis[linha][coluna] = 1;
        qt--;

        f (i, 0, 4) {
            ll nL = linha + dl[i];
            ll nC = coluna + dc[i];

            if (nL >= 0 && nL < n && nC >= 0 && nC < m) {
                if (mat[nL][nC] == '.' && !vis[nL][nC]) {
                    dfs_grid(nL, nC);
                    
                }
            }
        }
    };

    bool b1=1;
    
    f (i, 0, n) {
        f (j, 0, m) {
            if (mat[i][j] == '.') {dfs_grid(i,j); b1=0; break;}
            
        }
        if (!b1) break;
    }

    f (i, 0, n) {
        f (j, 0, m) {
            if (mat[i][j] == '.' && !vis[i][j]) mat[i][j] = 'X';

            cout << mat[i][j];
        }
        cout << el;
    }

    

    
    
}
signed main() {
    ___
    //cin>>t;
    //while(t--)
    solve();
    
    return 0;
}