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
// 18/01/2026 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7;
ll INF = 1e18 + 7;
const int MAXN = 1e5 + 5;
// matriz vll mat(n, vl(m, 0))

ll n, t, k, x, y, z;
string s, a, b, c;

/* (mind) 
    fazer um vetor de booleanos e ir colocando false para caso o indice do vetor for divisivel pelo numero
    

    97/7 qunatos sao divisore de 7 ?

    97 é a posicao que quero
    na posicao 97 que numero esta nela?

    na posicao 97 tem o numero 113

    esses numeros que sao divisiveis nao sao contatos ai dentro desse vetor
    
    queremos o ceil

    97/6 == 16,16 grupos formados

    MERDA MERDA MERDA MERDA MERDA 2H NISSO



*/
void solve() {
    cin>>n>>k;
    
    ll calc = (k-1)/(n-1);
    cout << k + calc << el;

}
signed main() {
    ___
    cin>>t;
    while(t--)
    solve();
    
    return 0;
}