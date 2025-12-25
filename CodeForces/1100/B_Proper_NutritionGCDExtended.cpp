// ------------ Discipline is remembering who you said you wanted to be^^ ------------
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
// 25/12/2025 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7;
ll INF = 1e18 + 7;
const int MAXN = 1e6 + 5;
// matriz vll mat(n, vl(m, 0))

ll n, t, k, x, y, z, a, b;
string s, c;

/* (mind) 
    Praticando gcdExtended :)
    
*/

ll gcdExtended(ll a, ll b, ll &x, ll &y) {
    if (a == 0) {
        x = 0; y = 1;
        return b;
    }

    ll x1, y1;
    ll gcd = gcdExtended(b % a, a, x1, y1);
    x = y1 - (b/a) * x1;
    y = x1;
    return gcd;
}

void solve() {
    cin>>n>>a>>b;
    
    ll x0, y0;
    ll g = gcdExtended(a, b, x0, y0);

    if (n % g != 0) {
        cout << "NO" << el;
        return;
    }

    x0 *= (n/g);
    y0 *= (n/g);

    ll b_g = b / g;
    ll a_g = a / g;

    ld k_min_d = (ld)-x0 / b_g;
    ld k_max_d = (ld)y0 / a_g;

    ll k_min = ceil(k_min_d);
    ll k_max = floor(k_max_d);

    if (k_min <= k_max) {
        ll k = k_min;

        ll x_final = x0 + k * b_g;
        ll y_final = y0 - k * a_g;

        cout << "YES" << el;
        cout << x_final << " " << y_final << el;
    }
    else {
        cout << "NO" << el;
    }


}
signed main() {
    ___
    // cin>>t;
    // while(t--)
    solve();
    
    return 0;
}