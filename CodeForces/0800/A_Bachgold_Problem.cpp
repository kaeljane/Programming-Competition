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
// 29/11/2025 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7;
ll INF = 1e18 + 7;
const int MAXN = 1e5 + 5;
// matriz vll mat(n, vl(m, 0))

ll n, t, k, x, y, z;
string s, a, b, c;

/* (mind) 
    
    
*/
vl primes; 
vector<bool> is_prime(MAXN, true); 

void sieve(ll n) {
    is_prime[0] = is_prime[1] = false;
    
    for (ll i = 2; i * i <= n; i++) {
        if (is_prime[i]) {
            for (ll j = i * i; j <= n; j += i)
                is_prime[j] = false;
        }
    }
    
    for (ll i = 2; i <= n; i++) {
        if (is_prime[i]) {
            primes.push_back(i);
        }
    }
}

void solve() {
    cin>>n;
    ll tam = n;
    sieve(n); 
    
    vl ans;
    for (ll i=0; i < primes.size(); i++){
        while ((n - primes[i]) >= 0) {
            if (n - primes[i+1] == 0) {
                ans.push_back(primes[i+1]);
                n -= primes[i+1];
            }
            else {
                ans.push_back(primes[i]);
                n -= primes[i];
            }
        }
        if (n == 0) break;
    }
    cout << ans.size() << el;
    for (auto x : ans) cout << x << " ";

}
signed main() {
    ___
    solve();
    
    return 0;
}