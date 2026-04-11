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
// 10/04/2026 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7; // 998244353;
ll INF = 1e18 + 7;
const int MAXN = 1e5 + 5;
// matriz vll mat(n, vl(m, 0))
// I can it

ll n, t, k, x, y, z;
string s, a, b, c;

/* (mind) 
    50m 57s
    
*/
vector<ll> divisores(ll n) {
    vector<ll> divs;

    for (ll i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            divs.pb(i);

            if (i * i != n) {
                divs.pb(n / i);
            }
        }
    }
    sort(all(divs));

    return divs;
}

ll __lcm(ll a, ll b) {
    return a / __gcd(a, b) * b;
}

void solve() {
    cin>>n;
    
    vector<ll> divs = divisores(n);
    
    ll tam = divs.size();
    
    ll ans = INF;
    ll back = INF;
    
    ii ansAnsuda;
    for (ll i = 0; i < tam-1; i++) {
        back = ans;
        ans = min(ans, __lcm(divs[i], n - divs[i]));
        if (back != ans) {
            ansAnsuda = {divs[i], n - divs[i]};
        }
    }

    cout << ansAnsuda.fi << " " << ansAnsuda.sec << el;
    
    
}
signed main() {
    ___
    cin>>t;
    while(t--)
    solve();
    
    return 0;
}