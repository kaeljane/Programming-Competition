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
// 15/04/2026 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7; // 998244353;
ll INF = 1e18 + 7;
const int MAXN = 1e5 + 5;
// matriz vll mat(n, vl(m, 0))

ll n, t, k, x, y, z, p;
string s, a, b, c;

/* (mind) 
    comprar sempre do vendedor mais barato

    
*/
void solve() {
    cin>>n>>p;
    vl residentes(n); 
    vl custo(n); 
    vector<ii> relacao(n);

    for (ll i = 0; i < n; i++) cin >> residentes[i];
    for (ll i = 0; i < n; i++) cin >> custo[i];

    for (ll i = 0; i < n; i++) {
        relacao[i] = {custo[i], residentes[i]};
    }

    sort(all(relacao));

    ll custoMinimo = p; 
    
    ll l = 0;
    ll r = n-1; // 1-based

    while (r > 0 && l < n) {
        if ( relacao[l].fi < p ) {
            ll custoPRes = relacao[l].fi;
            ll residentes = relacao[l].sec;
            if ( r >= residentes ) { // esse tem que avisar o maximo que conseguir
                l++;
                r -= residentes;
                custoMinimo += custoPRes*residentes;
            }
            else { // depois daqui pode parar
                custoMinimo += custoPRes*r;
                r = 0;
                break;
            }
        }
        else {
            // p -> custo e so pode avisar uma pessoa por vez
            custoMinimo += p*r;
            break;
        }
    }
    cout << custoMinimo << el;




    
    
}
signed main() {
    ___
    cin>>t;
    while(t--)
    solve();
    
    return 0;
}