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
// 27/08/2026 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7; // 998244353;
ll INF = 1e18 + 7;
const int MAXN = 1e5 + 5;
// matriz vll mat(n, vl(m, 0))

ll n, t, k, x, y, z, ans, p, h, pSoma=0, hSoma=0;
string s, a, b, c;

/* (mind) 
    Time: 6min 28sec
    Padrão: math basica

    Deduce:
        comparar a media de N notas que tiraram na escola
        quem tiver uma media maior ganha a discussao

         ":0 <- Gohan e Feijao"
        Se a media de Hassui for maior

        ":0 <-X- Gohan e Feijao"
        se a média da Pedra for maior 

        "Impasse"
        Se as duas medias são iguais

    
        
*/
void solve() {
    cin>>p>>h;
    pSoma += p;
    hSoma += h;
    
}
signed main() {
    ___
    cin>>t;
    n = t;
    while(t--)
    solve();
    
    if ((long double)pSoma / n > (long double)hSoma / n) {
        cout << ":0 <-X- Gohan e Feijao" << el;
    }
    else if ((long double)pSoma / n < (long double)hSoma / n) {
        cout << ":0 <- Gohan e Feijao" << el;
    }
    else {
        cout << "Impasse" << el;
    }
    
    return 0;
}