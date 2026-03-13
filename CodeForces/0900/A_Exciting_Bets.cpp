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
// 12/03/2026 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7;
ll INF = 1e18 + 7;
const int MAXN = 1e5 + 5;
// matriz vll mat(n, vl(m, 0))

ll n, t, k, x, y, z, a, b;
string s, c;

/* (mind) 
    apostei a dolares
    ronnie apostou b dolares

    empolgação dos fãs gcd(a, b) | maior divisor comum 

    para tornar a corrida mais interessante é possível:
        aumentar tanto o A quanto o B em 1
        diminuit tanto o A quanto o B em 1 (se A e B > 0)
        
    Determine a empolgação maxima que os fas podem ter
    Determinar o numero mínimo de movimentos para alcança-long
    
    crazy tem que rever isso aqui que intuicao maluca
    
    regra matemática: O Máximo Divisor Comum (GCD) de dois números nunca pode ser maior do que a diferença absoluta entre eles 
    
*/
void solve() {
    cin>>a>>b;

    if (a == b) {
        cout << 0 << " " << 0 << el;
    }
    else {
        ll gcd = abs(a - b);
        ll moves = min(b % gcd, gcd - b % gcd);
        cout << gcd << " " << moves << el;
    }
    
    
}
signed main() {
    ___
    cin>>t;
    while(t--)
    solve();
    
    return 0;
}