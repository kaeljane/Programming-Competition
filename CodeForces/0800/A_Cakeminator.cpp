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
// 29/07/2026 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7; // 998244353;
ll INF = 1e18 + 7;
const int MAXN = 1e5 + 5;
// matriz vll mat(n, vl(m, 0))

ll n, t, k, x, y, z, ans, m;
string s, a, b, c;

/* (mind) 
    Time: 18min 31sec
    Padrão: matriz, matriz de visitados...
    
*/
void solve() {
    cin>>n>>m;
    vector<vector<char>> mat(n, vector<char>(m));
    vector<vector<bool>> vis(n, vector<bool>(m, 0));
    ll qt = 0;
    f (i, 0, n) f (j, 0, m) cin>>mat[i][j];

    f (i, 0, n) {
        bool b1=1;
        f (j, 0, m) {
            if (mat[i][j] == 'S') {
                b1=0;
                break;
            }
        }
        if (b1) {
            f (j,0,m) {
                if (!vis[i][j]) {
                    vis[i][j] = 1;
                    qt++;
                }
            }
        }
    }

    f (j, 0, m) {
        bool b1=1;
        f (i, 0, n) {
            if (mat[i][j] == 'S') {
                b1=0;
                break;
            }
        }
        if (b1) {
            f (i,0,n) {
                if (!vis[i][j]) {
                    vis[i][j] = 1;
                    qt++;
                }
            }
        }
    }

    cout << qt << el;
    
}
signed main() {
    ___
    //cin>>t;
    //while(t--)
    solve();
    
    return 0;
}