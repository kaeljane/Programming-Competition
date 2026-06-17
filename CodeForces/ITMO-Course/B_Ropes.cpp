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
// 16/06/2026 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7; // 998244353;
ll INF = 1e18 + 7;
const int MAXN = 1e5 + 5;
// matriz vll mat(n, vl(m, 0))

ll n, t, k, x, y, z;
string s, a, b, c;

/* (mind) 
    
    
*/
bool check(double mid, ll n, ll k, vector<double> & v) {
    ll total_pedacos = 0;
    f (i, 0, n) {
        total_pedacos += (ll)(v[i]/mid);
    }
    return total_pedacos >= k;
}

void solve() {
    cin>>n>>k;
    vector<double> v(n); f (i, 0, n) cin>>v[i];
    
    double l = 0;
    double r = 1e8;

    f (i, 0, 100) { // é um bom numero! mesmo que while (r-l > 1e-7) 
        // que seria até onde o erro poderia ir 
        double mid = l+(r-l)/2.0;
        if (check(mid,n,k,v)) {
            l = mid;
        }
        else r = mid;
    }

    cout << setprecision(6) << fixed << l << '\n';

}
signed main() {
    ___
    //cin>>t;
    //while(t--)
    solve();
    
    return 0;
}