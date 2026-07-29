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
// 28/07/2026 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7; // 998244353;
ll INF = 1e18 + 7;
const int MAXN = 1e5 + 5;
// matriz vll mat(n, vl(m, 0))

ll n, t, k, x, y, z, ans;
string s, a, b, c;

/* (mind) 
    Time: 29min 1 sec
    Padrão: matriz, vetor de esq, dir, cima, baixo, 
    vetor de visitados...
    
*/
void solve() {
    cin>>n;
    vll mat(n, vl(n, 0));
    vll vis(n, vl(n, 0));
    f (i, 0, n) f (j, 0, n) cin>>mat[i][j];

    ll dx[4] = {1, 0, -1, 0}; // baixo, esq, cima, dir
    ll dy[4] = {0, 1, 0, -1};
    
    ll x = n/2, y = n/2;

    ll dir = 0;

    cout << mat[x][y] << " ";
    vis[x][y] = 1;

    f (i, 1, n*n) {
        ll esq = (dir + 1) % 4;
        ll nx = x + dx[esq];
        ll ny = y + dy[esq];

        if (nx >= 0 && nx < n && 
            ny >= 0 && ny < n && !vis[nx][ny]
        ) {
            dir = esq;
        }

        x += dx[dir];
        y += dy[dir];

        vis[x][y] = 1;
        cout << mat[x][y] << " ";
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