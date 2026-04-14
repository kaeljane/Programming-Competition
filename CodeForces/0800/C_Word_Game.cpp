// ------------ Repetition repetition repetition repetition repetition repet... ------------
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
#define uset unordered_set
#define ___ ios::sync_with_stdio(false); cin.tie(nullptr);
// 13/04/2026 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7; // 998244353;
ll INF = 1e18 + 7;
const int MAXN = 1e5 + 5;
// matriz vll mat(n, vl(m, 0))

ll n, t, k, x, y, z;
string s, a, b, c;

/* (mind) 
    12m 25s
    
*/
void solve() {
    cin>>n;
    map<string, int> mapa;
    vector<vector<string>> mat(3, vector<string>(n, "0"));

    for (ll i = 0; i < 3; i++) { // linha
        for (ll j = 0; j < n; j++) { // coluna
            cin>>mat[i][j];
            mapa[mat[i][j]]++;
        } 
    }

    for (ll i = 0; i < 3; i++) { // linha
        ll ans = 0;
        for (ll j = 0; j < n; j++) { // coluna
            if (mapa[mat[i][j]] == 1) {
                ans += 3;
            }
            else if (mapa[mat[i][j]] == 2) {
                ans += 1;
            }
        } 
        cout << ans << " ";
    }
    cout << el;



    
    
}
signed main() {
    ___
    cin>>t;
    while(t--)
    solve();
    
    return 0;
}