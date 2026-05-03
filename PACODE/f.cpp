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
// 01/05/2026 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7; // 998244353;
ll INF = 1e18 + 7;
const int MAXN = 1e5 + 5;
// matriz vll mat(n, vl(m, 0))

ll n, t, k, x, y, z;
string s, a, b, c;

/* (mind) 
    
    
*/
// bool primos(ll n){
//     if(n < 2) return false;
//     for(ll i=2;i*i<=n;i++){
//         if(n%i ==0) return false;
//     }
//     return true;
// }

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
    cin >> n;
    vector<ll> v(n);
    
    for (ll i = 0; i < n;i++) {
        cin>>v[i];
    }
    vector<ll> ans = {INF, INF, INF};
    for (ll i = 0; i < n; i++) {
        for (ll j = i+1; j < n; j++){
            for (ll k = j+1; k < n; k++) {
                if (is_prime[v[i] + v[j] + v[k]] && v[i] + v[j] + v[k] > 50) {
                    cout << "SIM" << el;
                    cout << i+1 << " " << j + 1 << " " << k+1 << el;
                    return; 
                }
            }
        }
    }

    cout << "NAO" << el;
    

}

signed main() {
    ___
    sieve(MAXN);
    // cin>>t;
    // while(t--)
    solve();
    
    return 0;
}