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
// 25/08/2026 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7; // 998244353;
ll INF = 1e18 + 7;
const int MAXN = 1e5 + 5;
// matriz vll mat(n, vl(m, 0))

ll n, t, k, x, y, z, ans, m;
string s, a, b, c;

/* (mind) 
    Time: aprox +30min
    Padrão: mapa de frequencia
    
    Summarize:
        n -> qt total de retalhos que compoe a colcha
        string com n caracteres, cada letra representando uma cor

    Deduce:
        janela deslizante

        10
        bb[ccacaca]z

        tem que faze com mapa de frequencia e nao prefix sum de unicos


*/
void solve() {
    cin>>n>>s;

    vector<ll> mpFreq(256, 0);
    
    ll ansMaior = 0, atual = 0, l = 0; // guardará o inicio
    
    f (r, 0, n) {
        if (mpFreq[s[r]] == 0) {
            atual++;
        }
        mpFreq[s[r]]++;
        
        while (atual > 2 && l <= r) {
            mpFreq[s[l]]--;
            if (mpFreq[s[l]] == 0) {
                atual--;
            }
            l++;
        }

        if (atual <= 2) {
            ansMaior = max(ansMaior, r - l + 1);
        }

    }

    cout << ansMaior << el;

}
signed main() {
    ___
    //cin>>t;
    //while(t--)
    solve();
    
    return 0;
}