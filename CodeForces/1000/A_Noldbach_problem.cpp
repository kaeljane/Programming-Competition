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

ll n, t, k, x, y, z, qt;
string s, a, b, c;

/* (mind) 
        
        
*/


const int MAXN = 1e6 + 5;
vector<bool> ePrimo(MAXN, true); 

void sieve() {
    ePrimo[0] = ePrimo[1] = false; // 0 e 1 não são primos

    for (ll i = 2; i * i < MAXN; i++) {
        if (ePrimo[i]) {
            for (ll j = i * i; j < MAXN; j += i) {
                ePrimo[j] = false;
            }
        }
    }
}

vector<ll> build_prefix(const vector<ll>& v) {
        ll n = v.size();
        vector<ll> p(n + 1, 0);
        for (ll i=0; i < n; i++) {
                p[i + 1] = p[i] + v[i];
        }
        return p;
}


bool isPrimo(ll n){
        if( n <= 1) return false;
        if (n <= 3) return true;

        if (n % 2 == 0) return false;

        for (ll i=3; i*i <= n; i+=2){
                if (n % i == 0) {
                        return false;
                }
        }
        return true;

}

void solve() {
        cin>>n>>k;
        vl primos;

        for (ll i=2; i < n; i++) {
                if (ePrimo[i]) primos.pb(i);
        }
        
        for (ll i=0; i < sz(primos); i++) {
                ll ans = primos[i] + primos[i+1] + 1;
                if (isPrimo(ans) && ans <= n) {
                        qt++;
                }
        }
        if (qt >= k) cout << "YES" << el;
        else {
                cout << "NO" << el;
        }

}
signed main() {
        ___
        t=1;
        sieve();
        solve();
        
        return 0;
}