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
// 30/01/2026 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7;
ll INF = 1e18 + 7;
const int MAXN = 1e5 + 5;
// matriz vll mat(n, vl(m, 0))

ll n, t, k, x, y, z, m;
string s, a, b, c;

/* (mind) 
    upcoming -> proximas rodadas
    
*/
void solve() {
    cin>>n>>m;
    cin>>s;

    map<char, ll> mapa;
    ll ans = 0;
    
    for (ll i = 0; i < n; i++) {
        mapa[s[i]]++;
    }

    if (mapa['A'] < m) ans += m - mapa['A'];
    if (mapa['B'] < m) ans += m - mapa['B'];
    if (mapa['C'] < m) ans += m - mapa['C'];
    if (mapa['D'] < m) ans += m - mapa['D'];
    if (mapa['E'] < m) ans += m - mapa['E'];
    if (mapa['F'] < m) ans += m - mapa['F'];
    if (mapa['G'] < m) ans += m - mapa['G'];

    cout << ans << el;
    
}
signed main() {
    ___
    cin>>t;
    while(t--)
    solve();
    
    return 0;
}