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

ll n, t, k, x, y, z, ans;
string s, a, b, c;

/* (mind) 
    Time: 10min 49sec
    Padrão: busca ternária
    
    Summarize(resumir/descrever):
        
        
    Deduce(deduzir/derivar/testar):
        
        
    Solve(resolver/programar):
    Change(TLE, WA):

        
*/

ll f_custo(const vl &v, ll x) {
    return v[x];
}

void solve() {
    cin>>n;
    ans = 0;
    vl v(n); f (i, 0, n) cin>>v[i];
    
    ll l = 0, r = n-1;

    while (r - l >= 40) {
        ll m1 = l + (r-l) / 3;
        ll m2 = r - (r-l) / 3;

        if (f_custo(v, m1) < f_custo(v, m2)) {
            l = m1;
        }
        else if (f_custo(v, m1) > f_custo(v, m2)) {
            r = m2;
        }
        else {
            l = m1;
            r = m2;
        }

    }

    ll pico = -1;
    ll pos_pico = -1;

    f (i, l, r+1) {
        if (v[i] > pico) {
            pico = v[i];
            pos_pico = i;
        }
    }

    cout << pico << el;
    
}
signed main() {
    ___
    cin>>t;
    while(t--)
    solve();
    
    return 0;
}