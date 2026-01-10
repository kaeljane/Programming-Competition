// ------------ Discipline is remembering who you said you wanted to be^^ ------------
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
#define ___ ios::sync_with_stdio(false); cin.tie(nullptr);
// 10/01/2026 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7;
ll INF = 1e18 + 7;
const int MAXN = 1e6 + 5;
// matriz vll mat(n, vl(m, 0))

ll n, t, k, x, y, z;
string s, a, b, c;

/* (mind) 
    se encontrar um numero impar entao ele nao é divisivel por 2 e 2 é primo entao o resultado será 1
    
    encontrou 5, mas deveria ser 3

    o problema estar quando nao tiver nenhum numero impar...
    
    existe 669 numeros primos até 5.000.000
    10^2 * 10^3 
*/
vl primes;
vector<bool> is_prime(MAXN, true);

void sieve(ll n) {
    is_prime[0] = is_prime[1] = false;

    for (ll i = 2; i * i <= n; i++) {
        if (is_prime[i]) {
            for (ll j = i*i; j <= n; j += i) is_prime[j] = false;
        }
    }

    for (ll i = 2; i <= n; i++) {
        if (is_prime[i]) primes.push_back(i);
    }

}


void solve() {
    cin>>n;
    bool temImpar = false;
    bool divPorTres = true;
    vl v(n); for (ll i = 0; i < n; i++) {
        cin>>v[i]; 
        if (v[i] & 1) {
            temImpar = true;
        }
        if (v[i] % 3 != 0) {
            divPorTres = false;
        }
        
    }
    if (temImpar) {cout << 2 << el; return;}
    if (!divPorTres) {cout << 3 << el; return;}
    
    sort(all(v));


    for (ll i = 2; i < primes.size(); i++) {     // primes

        for (ll j = 0; j < n; j++) {             // vector
            if (__gcd(v[j], primes[i]) == 1) {
                cout << primes[i] << el;
                return;
            }
        }
        
    }

    
}
signed main() {
    ___
    sieve(1500);
    cin>>t;
    while(t--)
    solve();
    
    return 0;
}