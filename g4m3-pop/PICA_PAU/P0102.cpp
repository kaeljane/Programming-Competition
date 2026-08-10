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
// 10/08/2026 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7; // 998244353;
ll INF = 1e18 + 7;
const int MAXN = 1e5 + 5;
// matriz vll mat(n, vl(m, 0))

ll n, t, k, x, y, z, ans, m, f, qtX=0;
string s, a, b, c;

/* (mind) 
    Time: 42min 8sec
    Padrão: 

    terminar oque começou
    
    n - numero de lojas
    m - dias que faltam black friday
    f - num de lojas que terao merc de frida no dia zero

    x - indica uma loja resistente


    colocar suas mercadorias em todas as lojas da TS

    10 3 1
    0[0]0X000000
    SSSX000000

    não consegue preencher o outro lado

    uma unica loja consegue cobrir 2*m + 1

    achei difícil

*/
void solve() {
    cin>>n>>m>>f>>s;
    ans = 0;

    vl v;
    bool b1=1;
    ll fZero = -1, tamBloco = 0;
    f (i, 0, n){
        // achou algum zero antes?
        if (s[i] == '0') {b1=0; if (fZero==-1) fZero=i;}
        else if (!b1) {
            b1=1;
            tamBloco = i - fZero;

            ll kk = ceil((double)tamBloco / (2*m + 1)); 
            ans += kk;
            fZero = -1;
        }
    }
    if (!b1) {
        tamBloco = n - fZero;
        ll kk = ceil((double)tamBloco / (2*m + 1));
        ans += kk;
    }

    if (ans <= f) {cout << "YES" << el;}
    else {cout << "NO" << el;}


    
    
}
signed main() {
    ___
    //cin>>t;
    //while(t--)
    solve();
    
    return 0;
}