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
// 09/04/2026 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7; // 998244353;
ll INF = 1e18 + 7;
const int MAXN = 1e5 + 5;
// matriz vll mat(n, vl(m, 0))

ll n, t, k, x, y, z, b,s;
string a, c;

/* (mind) 
    1h+
    
*/
void solve() {
    cin>>n>>k>>b>>s;
    
    ll atual = k*b;
    vector<ll> v(n, 0);
    v[0] = atual;

    if (k*b <= s && s <= k*b + (k - 1)*n){
        for (ll i = 0; i < n; i++) {
            ll agora = min(s - atual, k - 1);
            v[i] += agora;
            atual += agora;
        }
        for (auto &x : v) {
            cout << x << " ";
        }
        cout << el;

    }
    else {
        cout << -1 << el;
    }

    
}
signed main() {
    ___
    cin>>t;
    while(t--)
    solve();
    
    return 0;
}