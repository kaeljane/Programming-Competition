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
// 11/08/2026 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7; // 998244353;
ll INF = 1e18 + 7;
const int MAXN = 1e5 + 5;
// matriz vll mat(n, vl(m, 0))

ll n, t, k, x, y, z, ans;
string s, a, b, c;

/* (mind) 
    Time: 
    Padrão: 

    Mine simulado com 4 quest 1200 de rating

    P0171 | 9min 3sec
    P0152 | 15min 40sec
    P0149 | 38min 10sec (quase nao lembrei a existencia desse algoritmo)
    P0148 | 21min 24sec
    Tempo total = 1h 24min
    
    10
    [-5] -7 -6 -6 -7 -7 -1 -3 -4 -6
    
*/
void solve() {
    cin>>n;
    ans = INF;
    vl v(n); f (i, 0, n) cin>>v[i];
    
    vector<ll> lis;
    f (i, 0, n) {
        auto it = upper_bound(all(lis), v[i]); // na biblioteca estar lower_bound 
        if (it == lis.end()) lis.pb(v[i]);     
        else {
            ll k = it-lis.begin();
            lis[k] = v[i];
        }
    }

    cout << n - lis.size() << el;

    
}
signed main() {
    ___
    //cin>>t;
    //while(t--)
    solve();
    
    return 0;
}