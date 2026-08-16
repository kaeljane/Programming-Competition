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
// 15/08/2026 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7; // 998244353;
ll INF = 1e18 + 7;
const int MAXN = 1e5 + 5;
// matriz vll mat(n, vl(m, 0))

ll n, t, k, x, y, z, ans, m, q;
string s, a, b, c;

/* (mind) 
    Time: 13min 42sec
    Padrão: busca binaria
    
    Summarize(resumir/descrever):
        
        
    Deduce(deduzir/derivar/testar):
        10^6 nao da para usar map
        
    Solve(resolver/programar):
    Change(TLE, WA):
        
*/

void solve() {
    cin>>n>>m;
    ans = 0;
    
    ll total = n * m;
    vector<string> v(total);

    f (i, 0, total) {
        cin>>s;
        v[i] = s;
    }

    cin>>q;

    f (i, 0, q) {
        cin>>a;
        auto it = lower_bound(all(v), a);

        cout << (it - v.begin()) / m + 1 << el;
    }
    
    
    
}
signed main() {
    ___
    //cin>>t;
    //while(t--)
    solve();
    
    return 0;
}