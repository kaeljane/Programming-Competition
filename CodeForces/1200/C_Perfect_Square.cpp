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

ll n, t, k, x, y, z;
string s, a, b, c;

/* (mind) 
    fácil nada!!!    

*/

void solve() {
    cin>>n;
    vector<vector<char>> mat(n, vector<char>(n, '0'));

    // input's
    for (ll i = 0; i < n; i++) {
        for (ll j = 0; j < n; j++) {
            cin>>mat[i][j];
        }
    }

    ll ans = 0;
    
    for (ll i = 0; i < n/2; i++) {
        for (ll j = 0; j < n/2; j++) {
            char c1 = mat[i][j];
            char c2 = mat[j][n - 1 - i];
            char c3 = mat[n - 1 - i][n - 1 - j];
            char c4 = mat[n - 1 - j][i];

            char mx = max({c1, c2, c3, c4});

            ans += (mx - c1)+(mx-c2)+(mx-c3)+(mx-c4);

        }
    }
    
    cout << ans << el;

    
}
signed main() {
    ___
    cin>>t;
    while(t--)
    solve();
    
    return 0;
}