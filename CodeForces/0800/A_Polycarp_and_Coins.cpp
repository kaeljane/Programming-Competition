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
// 21/01/2026 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7;
ll INF = 1e18 + 7;
const int MAXN = 1e5 + 5;
// matriz vll mat(n, vl(m, 0))

ll n, t, k, x, y, z;
string s, a, b, c;

/* (mind) 
    10 e alguma coisa dividido por tres
    10 + 10*2 = 32


    0 --- 9

    n = 1
    1 0 (melhor solucao)

    n = 2
    2 0 
    0 1

    se n impar tira 1 fica par divide por dois coloca no segundo output
    
    5 - 1 / 4 4/2 = 1 


    7 está (4,3) (3, 2)
    precisa 
    (7-1)/2 = 3
    
    7/3 = 2,... 

    começa de 2 entao
    2 * 1 + 2 * 2 == n ? se nao aumente uma quantidade de 2 se tiver se nao tiver aumente de 1

    3
    metade = 1
    (1 + 1) + 1*2 == 3? -> 4 NOOO

    (1) + 2*2 == 3 -> NOOO precisa ter outra condicao

    (4,5) ->
    
*/
void solve() {
    cin>>n;

    ll c1 = n/3;
    ll c2 = n/3;

    if (n % 3 == 1) c1++;
    else if (n % 3 == 2) c2++; 

    cout << c1 << " " << c2 << el;
    
    
}
signed main() {
    ___
    cin>>t;
    while(t--)
    solve();
    
    return 0;
}