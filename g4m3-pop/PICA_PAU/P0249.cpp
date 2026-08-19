// ------------ Repetition repetition repetition repetition repetition repet... ------------
#include <bits/stdc++.h>
#define ll long long
#define ii pair<ll, ll>
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
// 18/08/2026 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7; // 998244353;
ll INF = 1e18 + 7;
const int MAXN = 1e5 + 5;
// matriz vll mat(n, vl(m, 0))

ll n, t, k, x, y, z, ans;
string s, a, b, c;

/* (mind) 
    Time: 30min
    Padrão: math, for, primos, string
    
    Summarize(resumir/descrever):
        
        
    Deduce(deduzir/derivar/testar):
        
        
    Solve(resolver/programar):
    Change(TLE, WA):
        
*/
vl primes;
bool isPrime(ll n) {
    if (n < 2) return false;
    if (n < 4) return true;

    if (n % 2 == 0) return false;

    for (ll i = 3; i * i <= n; i += 2) {
        if (n % i == 0) return false;
    }

    return true;

}

void solve() {
    cin>>s;
    ll qtCasasPonto = 0;
    bool b1 = 0;
    string ss;
    f (i, 0, s.size()) {
        if (s[i] == '.') b1=1;
        else if (b1) qtCasasPonto++;

        if (s[i] != '.') ss += s[i];
    }

    ll num1 = stoll(ss);
    ll num2 = 1;
    f (i, 0, qtCasasPonto) num2 *= 10;

    // temos que achar dois numeros em comum que possa dividir eles? 
    // algum primo.

    // se segundo numero no final for 1 entao imprimir em outra formatacao

    f (i, 0, primes.size()) {
        if ( num1 % primes[i] == 0 && num2 % primes[i] == 0) {
            num1 /= primes[i];
            num2 /= primes[i];
            i--;
        }
    }
    if (num2 == 1) cout << num1 << el;
    else cout << num1 << "/" << num2 << el;
    
}
signed main() {
    ___
    f (i, 2, MAXN) if (isPrime(i)) primes.pb(i);
    cin>>t;
    while(t--)
    solve();
    
    return 0;
}