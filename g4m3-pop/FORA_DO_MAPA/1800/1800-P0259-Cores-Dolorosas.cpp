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
// 02/08/2026 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7; // 998244353;
ll INF = 1e18 + 7;
const int MAXN = 1e5 + 5;
// matriz vll mat(n, vl(m, 0))

ll n, t, k, x, y, z, ans=INF;
string s, a, b, c;

/* (mind) 
    Time: 1h 50min 44sec fiquei entre P0258 e P0258 
    Padrão: flood fill talvez? espero que sim, 
        dfs hamiltoniana, nao asdjakdjakldja
        floyd warshal

    as cores machucam
    ela se sintoniza com a cor da primeira correnteza que ela toda

    lembro que tem uma quest parecida com essa no g4m3 mas parece 
    que nela so foi usado um is_permutation algo assim

    linha  i -> saida
    coluna j -> chegada

    é no maximo dois pulos?? nao
    k..............................
    

*/


void solve() {
    cin>>n;
    vector<vector<char>> mat(n, vector<char>(n));
    vector<vector<ll>> esf(n, vector<ll>(n));
    f (i, 0, n) {
        f (j, 0, n) {
            cin>>mat[i][j];
        }
    }
    f (i, 0, n) {
        f (j, 0, n) {
            cin>>esf[i][j];
        }
    }
    char ansChar = 'Z' + 1;

    for (char c = 'A'; c <= 'Z'; c++) {
        vector<vector<ll>> dist(n, vector<ll>(n, INF));

        f (i,0,n) dist[i][i] = 0;
        
        f (i, 0, n) {
            f (j, 0, n) {
                if (mat[i][j] == c) {
                    dist[i][j] = min(dist[i][j], esf[i][j]);
                }
            }
        }

        f (k, 0, n) {
            f (i, 0, n) {
                f (j, 0, n) {
                    if (dist[i][k] < INF && dist[k][j] < INF) {
                        dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
                    }
                }
            }
        }

        if (dist[0][n-1] < INF) {
            if (dist[0][n-1] < ans) {
                ans = dist[0][n-1];
                ansChar = c;
            }
        }
    }

    cout << ansChar << " " << ans << el;

    
}
signed main() {
    ___
    //cin>>t;
    //while(t--)
    solve();
    
    return 0;
}