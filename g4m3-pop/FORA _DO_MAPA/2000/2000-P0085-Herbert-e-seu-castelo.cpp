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
// 13/08/2026 by Kaeljane
using namespace std;

ll MOD = 7907; // 998244353;
ll INF = 1e18 + 7;
const int MAXN = 1e5 + 5;
// matriz vll mat(n, vl(m, 0))

ll n, t, k, x, y, z, ans;
string s, a, b, c;

/* (mind) 
    Time: 36min 52sec
    Padrão: sequencias e progressoes usando MOD
    
    Summarize(resumir/descrever):
        progressão aritmética que vai aumentando
        triangulos sendo que cada triangulo tem 3 
        cartas e as cartas de baixo tem só 2 
        cartas...
        
    Deduce(deduzir/derivar/testar):
        
        n * (n + 1) / 2

        multiplica a formula por tres e diminui n 

        A*B em mod fica (A % MOD) * (B % MOD)
        (A-B) % M = ((A%M - B%M) + M ) % M

        
    Solve(resolver/programar):
    Change(TLE, WA):
        
*/
void solve() {
    cin>>n;
    
    if (n % 2 == 0) cout << (3*   (((n/2) % MOD)  *  ((n+1) % MOD) % MOD) - (n % MOD) + MOD) % MOD << el;
    else cout << (3*(((n % MOD)* (((n+1)/2) % MOD )) % MOD) - (n % MOD) + MOD) % MOD << el;
}
signed main() {
    ___
    //cin>>t;
    //while(t--)
    solve();
    
    return 0;
}