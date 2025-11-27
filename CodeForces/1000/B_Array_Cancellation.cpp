#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define ii pair<ll, int>
#define vi vector<int>
#define vc vector<char>
#define vb vector<bool>
#define vs vector<string>
#define vl vector<long long>
#define vd vector<long double>
#define vll vector<vector<long long>>
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define rev(v) reverse(all(v))
#define soma(v) accumulate(all(v), 0LL)
#define max_el(v) *max_element(all(v))
#define min_el(v) *min_element(all(v))
#define sz(v) ((int)(v).size())
#define vazio(v) (v).empty()
#define fi first
#define pb push_back
#define pf push_front
#define ppb pop_back
#define ppf pop_front
#define sec second
#define el '\n'
#define umap unordered_map
#define uset unordered_set
#define imp(v, t, e) copy(v.begin(), v.end(), ostream_iterator<t> (cout, e))
#define ___ ios::sync_with_stdio(false); cin.tie(nullptr);
// 22/11/2025 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7;
ll INF = 1e18 + 7;
const int MAXN = 1e6 + 5;

ll n, t, k, x, y, z;
string s, a, b, c;

/* (mind) 
        
        
*/
ll get_max_suffix_sum(const vl& v) {
    ll n = sz(v);
    if (n == 0) return -INF; 

    ll current_sum = 0;
    ll max_suf = -INF; 

    for (int i = n - 1; i >= 0; i--) {
        current_sum += v[i];
        max_suf = max(max_suf, current_sum);
    }

    return max_suf;
}
void solve() {
        cin>>n;
        vl v(n);
        for (ll i=0; i < n; i++) cin>>v[i];

        cout << get_max_suffix_sum(v) << el;        

}
signed main() {
        ___
        t=1;
        cin>>t;
        while(t--)
        solve();
        
        return 0;
}

