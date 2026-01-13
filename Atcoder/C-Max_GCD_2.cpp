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
// 13/01/2026 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7;
ll INF = 1e18 + 7;
const int MAXN = 1e6 + 5;
// matriz vll mat(n, vl(m, 0))

ll n, t, k, x, y, z, a, b;
string s, c;

/* (mind) 
    vai receber dois valores a e b
    a e b 
        -> um intervalo
        
    x e y 
        -> nao pode ser igual

    10^5


*/
void solve() {
    cin>>a>>b;

    // implementação O(n^2) - TLE
    // for (ll i = a; i <= b; i++) {
    //     for (ll j = i; j <= b; j++) {
    //         if (i != j) {
    //             ans = max(ans, __gcd(i, j));
    //         }
    //     }
    // }
    // cout << ans << el;

    for (ll c = b; ; c--) {
        if (ceil((a + c - 1) / c) < floor(b/c)) {
            cout << c << el;
            return;
        }
    }

    
}
signed main() {
    ___
    // cin>>t;
    // while(t--)
    solve();
    
    return 0;
}