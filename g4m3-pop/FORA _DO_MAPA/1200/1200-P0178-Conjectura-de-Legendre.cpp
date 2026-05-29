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
// 28/05/2026 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7; // 998244353;
ll INF = 1e18 + 7;
const int MAXN = 225030005; // lembrar que é o numero de entrada max nesse caso(n+1)² + sobrinha
// matriz vll mat(n, vl(m, 0))

ll n, t, k, x, y, z;
string s, a, b, c;

/* (mind) 
    n
    n² e (n + 1)²

    qt de numeros primos em um intervalo!!
    só precisa testar até n+1 o crivo
    n + 1

    41min 8sec
    
*/

vector<ll> primes;
vector<bool> is_prime(MAXN, true);
void sieve(ll n) {
    is_prime[0] = is_prime[1] = false;

    for (ll i = 2; i * i <= n; i++) {
        if (is_prime[i]) {
            for (ll j = i * i; j <= n; j += i) {
                is_prime[j] = false;
            }
        }
    }

    for (ll i = 2; i <= n; i++) {
        if (is_prime[i]) {
            primes.pb(i);
        }
    }
}

void solve() {
    cin>>n;
    ll tam = primes.size();
    ll ans = 0;

    auto menor = lower_bound(all(primes), n*n);
    ll idx = menor - primes.begin();

    for (ll i = idx; i < tam; i++) {
        if (primes[i] <= (n+1)*(n+1)) ans++;
        else break;
    }

    cout << ans << el;

    
}
signed main() {
    ___
    // cin>>t;
    // while(t--)
    sieve(MAXN-1);
    solve();
    
    return 0;
}