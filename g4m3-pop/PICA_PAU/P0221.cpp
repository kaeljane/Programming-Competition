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
// 14/08/2026 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7; // 998244353;
ll INF = 1e18 + 7;
const int MAXN = 1e5 + 5;
// matriz vll mat(n, vl(m, 0))

ll n, t, k, x, y, z, ans, vert;
string s, a, b, c;

/* (mind) 
    Time: 26min 43sec
    Padrão: grafos
    
    Summarize(resumir/descrever):
        Cada indice do array representa um vértice de um grafo

        
    Deduce(deduzir/derivar/testar):
        
        
    Solve(resolver/programar):
    Change(TLE, WA):
        
*/
void solve() {
    cin>>n;
    ans = 0;
    vl v(n); f (i, 0, n) cin>>v[i];

    // vector<vector<ll>> adj(n);
    vector<vector<ll>> mat(n, vector<ll>(n,0));
    f (i, 0, n) {
        f (j, i+1, n) {
            if (v[i] % v[j] == 0 || v[j] % v[i] == 0) {
                // adj[i+1].pb(j+1); // so os vertices e nao os valores
                mat[i][j] = 1;
                mat[j][i] = 1;
            }
        }
    }

    f (i, 0, 3) {
        cin>>x>>y;
        if (mat[x-1][y-1] == 1 ||
            mat[y-1][x-1] == 1
        ) cout << "YES" << el;
        else cout << "NO" << el;
    } 

    cin>>vert; vert--;

    f (i, 0, n) {
        if (mat[vert][i] == 1) cout << i + 1 << " ";
    }
    cout << el;


    
    
}
signed main() {
    ___
    //cin>>t;
    //while(t--)
    solve();
    
    return 0;
}