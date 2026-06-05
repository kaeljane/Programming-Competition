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
// 04/06/2026 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7; // 998244353;
ll INF = 1e18 + 7;
const int MAXN = 1e5 + 5;
// matriz vll mat(n, vl(m, 0))

ll n, t, k, x, y, z, h, i, idxAtual;
string s, a, b, c;

/* (mind) 
    descobrir o galho de maior valor de cada broto da fazenda
    um galho é um caminho da raiz (vertice mais alto) até uma folha (vertice mais
    baixo)
    altura h
    o valor de galho é a soma dos valores dos vertices pelos quais ele passa

    73min 40sec (saiu faisca da cabeça) 
    
*/
void solve() {
    ll elem = (1 << h) - 1;
    vl v(elem); f (i, 0, elem) cin>>v[i];

    ll ansMaximo = -INF;
    
    rf (k, elem - 1, elem / 2) {
        idxAtual = k;
        ll ansAtual = v[0]; // ja começa com o valor da raiz.

        while (idxAtual > 0) {
            ansAtual += v[idxAtual];
            idxAtual = (idxAtual - 1) / 2;
        }
        ansMaximo = max(ansMaximo, ansAtual);
    }

    cout << ansMaximo << el;
    
    
}
signed main() {
    ___
    cin>>t>>h;
    while(t--)
    solve();
    
    return 0;
}