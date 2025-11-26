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
// 25/11/2025 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7;
ll INF = 1e18 + 7;
const int MAXN = 1e6 + 5;

ll n, t, k, x, y, z;
string s, a, b, c;

/* (mind) 
        crivo
        1 + sqrt(n) + n
        precisa ter tres divisores que sao esses de cima!!
*/

vector<ll> primes;
vector<bool> is_prime(MAXN, true);

void sieve(ll n) {
        is_prime[0] = is_prime[1] = false;

        // Crivo normal para marcar
        for (ll i=2; i*i <= n; i++) {
                if (is_prime[i]) {
                        for (ll j=i*i; j <= n; j += i)
                                is_prime[j] = false;
                }
        }

        // colocar os primos em uma lista
        is_prime[1] = true; is_prime[n] = true;
        primes = {};
        if (n % 2 == 0) is_prime[n/2] = true;
        for (ll i=1; i <= n/2; i++) { // modifiquei n/2 estava n
                if (is_prime[i] && ( n % i == 0)) {
                        primes.pb(i);
                }
        }
        primes.pb(n);
}



void solve() {
        cin>>n;
        while (n--) {
                cin>>x;
                sieve(x);
                // for (auto x : primes) {
                //         cout << x << " ";
                // }

                if (primes.size() == 3) cout << "YES" << el;
                else cout << "NO" << el;
                

        }
        
}
signed main() {
        ___
        t=1;
        //cin>>t;
        //while(t--)
        solve();
        
        return 0;
}