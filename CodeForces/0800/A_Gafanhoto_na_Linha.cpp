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
// 15/12/2025 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7;
ll INF = 1e18 + 7;
const int MAXN = 1e6 + 5;
// matriz vll mat(n, vl(m, 0))
// vl v(n); for (ll i=0; i<n; i++) cin>>v[i];

ll n, t, k, x, y, z;
string s, a, b, c;

/* (mind) 
    problema construtivo. Cuidado para não ter pensamento greediano
    2 * 10^8 / 10^3 = 2 * 10^5/10^2 -> aprox = [2* 10^3]

*/
void solve() {
    cin>>x>>k;
    
    //caso trivial
    ll xAbs = abs(x);
    if (xAbs % k != 0) {
        if (x < 0){
            cout << -1 << el;
            cout << x << el;
        }
        else {
            cout << 1 << el;
            cout << x << el;
        }
        return;
    }

    if (x < 0) {
        cout << 2 << el;
        cout << -1 << " " << x+1 << el;
    }
    else {
        cout << 2 << el;
        cout << 1 << " " << x-1 << el;
    }



    
}
signed main() {
    ___
    cin>>t;
    while(t--)
    solve();
    
    return 0;
}