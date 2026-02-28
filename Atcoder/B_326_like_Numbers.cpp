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
// 24/02/2026 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7;
ll INF = 1e18 + 7;
const int MAXN = 1e5 + 5;
// matriz vll mat(n, vl(m, 0))

ll n, t, k, x, y, z;
string s, a, b, c;

/* (mind) 
    CDU = n
    C*D = U
    
    precisa ser maior do que n
    como eu faço isso com busca binária?????? da para fazer normal!!!!! busca sequencial!!!

*/
void solve() {
    cin>>n;
    
    /*
    forma de pre-computar
    validar todos antes de colocar na busca binária.
    */ 
   
   vector<int> validos;
   for (int c = 1; c <= 9; c++) { // pre-computer
    for (int d = 0; d <= 9; d++) {
        if (c*d <= 9) {
                int u = c * d;
                validos.pb(100*c + 10*d + u);
            }
        }
    }
    sort(all(validos));
    
    auto lb = lower_bound(all(validos), n);

    cout << *lb << el;
    
    
    // fazer funcionar primeiro
    // for (ll i = n; i <= 919; i++) {
    //     ll cc = i / 100;
    //     ll dd = i / 10 % 10;
    //     ll uu = i % 10;
        
    //     if (cc * dd == uu) {
    //         cout << i << el;
    //         return;
    //     }
    //     /*
    //     320 / 100 = (3)
    //     320 / 10  = (32) = (2)
 
    //     */
 
    // }
    
}
signed main() {
    ___
    // cin>>t;
    // while(t--)
    solve();
    
    return 0;
}