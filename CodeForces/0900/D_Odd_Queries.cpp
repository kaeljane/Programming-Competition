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
// 25/01/2026 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7;
ll INF = 1e18 + 7;
const int MAXN = 1e5 + 5;
// matriz vll mat(n, vl(m, 0))

ll n, t, k, x, y, z, q, l, r;
string s, a, b, c;

/* (mind) 
    :)
    
*/

vl build_PrefixSum(const vector<ll> &v) {
    ll n = v.size();
    vector<ll> p(n+1, 0); // 1-base

    for (ll i = 0; i < n; i++) {
        p[i+1] = p[i] + v[i]; // anterior mais o de agora!!
    }
    return p;
}

void solve() {
    cin>>n>>q;
    vl v(n); 
    for (ll i = 0; i < n; i++) {
        cin>>v[i];
    }

    vl prefixSum = build_PrefixSum(v); // vai ser construido so uma vez

    // queries a ser respondidas
    for (ll i = 0; i < q; i++) {
        cin>>l>>r>>k;
        ll sum = 0;
        sum += prefixSum[l-1] - prefixSum[0];
        sum += prefixSum[prefixSum.size()-1] - prefixSum[r];
        sum += k * (r - l + 1); 

        if (sum&1) cout << "YES" << el;
        else cout << "NO" << el;

    }
    
}
signed main() {
    ___
    cin>>t;
    while(t--)
    solve();
    
    return 0;
}