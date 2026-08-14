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

ll MOD = 1e9 + 7; // 998244353;
ll INF = 1e18 + 7;
const int MAXN = 1e5 + 5;
// matriz vll mat(n, vl(m, 0))

ll n, t, k, x, y, z, ans;
string s, a, b, c;

/* (mind) 
    Time: 21min 21sec
    Padrão: greedy?
    
    Summarize(resumir/descrever):
        - Especializada em Ixpeed runs
        - Tem como objetivo concluir os jogos levando o 
        menor tempo possível.
        - Escolher um ponto e atravessar todas as plataformas
        seguindo exatamente neste ponto.
        - Ha n plataformas posicionadas, uma cima da outra
        - É necessário passar por todas as platarformas para
        passar de fase

        ------
        -----
        ----
        -----
        
    Deduce(deduzir/derivar/testar):
    - Maior esq e menor dir e diferença absoluta?
    - Se existir alguma plataforma que nao tem interseccao com
    outra então tem que imprimir zero
        
        
    Solve(resolver/programar):
    Change(TLE, WA):
        
*/
void solve() {
    cin>>n;
    ans = 0;
    // vl v(n);
    
    ll maxx = 0, minn = INF;
    
    
    f (i, 0, n) {
        cin>>x>>y;
        maxx = max(maxx, x);
        minn = min(minn, y);
    }
    if (maxx > minn) cout << 0 << el;
    else cout << abs(maxx - minn) + 1 << el;
    
    
}
signed main() {
    ___
    //cin>>t;
    //while(t--)
    solve();
    
    return 0;
}