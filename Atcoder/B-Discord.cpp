// ------------ Discipline is remembering who you said you wanted to be^^ ------------
#include <bits/stdc++.h>
#define ll long long
#define ii pair<ll, int>
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
#define ___ ios::sync_with_stdio(false); cin.tie(nullptr);
// 09/01/2026 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7;
ll INF = 1e18 + 7;
const int MAXN = 1e6 + 5;
// matriz vll mat(n, vl(m, 0))

ll n, t, k, x, y, z, m;
string s, a, b, c;

/* (mind) 
    
    
*/
void solve() {
    cin>>n>>m;
    vector<vector<ll>> mat(m, vector<ll>(n, 0));

    ll ans = 0;
    // input's linha coluna
    for (ll i = 0; i < m; i++) {
        for (ll j = 0; j < n; j++) {
            cin>>mat[i][j];
        }
    }

    for (ll u = 0; u < n; u++) {
        // vai passar por todos os numeros da primeira linha
        // v[0][i] linha zero... coluna 0, 1, 2, 3, 4, 5, 6
        set<int> conj;
        for (ll i = 0; i < m; i++) {           // linha
            for (ll j = 0; j < n; j++) {       // coluna
                if (mat[0][u] == mat[i][j]) {
                    // temos que olhar o valor da coluna.
                    if (j - 1 < 0) {
                        // olhe só o da dir
                        conj.insert(mat[i][j+1]);
                    }
                    else if (j + 1 >= n) {
                        // olhe so o da esq
                        conj.insert(mat[i][j-1]);
                    }
                    else {
                        // olhe os dois
                        conj.insert(mat[i][j-1]);
                        conj.insert(mat[i][j+1]);
                    }
                }
            }
        }

        // contar...
        ans += (n - 1) - conj.size();
        conj.clear();

    }

    cout << ans/2 << el;
    
    
}
signed main() {
    ___
    // cin>>t;
    // while(t--)
    solve();
    
    return 0;
}