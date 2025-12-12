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
// 11/12/2025 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7;
ll INF = 1e18 + 7;
const int MAXN = 1e6 + 5;
// matriz vll mat(n, vl(m, 0))

ll n, t, k, x, y, z;
string s, a, b, c;

/* (mind) 
    se i = '.' i+1 = '.' i+1 = '.' >> temos água infinita
    
*/
void solve() {
    cin>>n;
    cin>>s; 
    ll ans = 0;
    // cout << s << el;
    
    bool verd = false;
    for (ll i=0; i < n-2; i++) {
        if (s[i] == '.' && s[i+1] == '.' && s[i+2] == '.') {
            ans += 2;
            s[i] = 'a';
            s[i+2] = 'a';
            verd = true;
        }

        if (verd) {
            for (ll i=0; i < n; i++) {
                if (s[i] == '.') s[i] = 'a';
            }
        }
    }
    if (s.find('.') != string::npos) {
        for (ll i=0; i < n; i++) {
            if (s[i] == '.') ans++;
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