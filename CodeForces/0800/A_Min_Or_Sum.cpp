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
// 06/02/2026 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7;
ll INF = 1e18 + 7;
const int MAXN = 1e5 + 5;
// matriz vll mat(n, vl(m, 0))

ll n, t, k, x, y, z;
string s, a, b, c;

/* (mind) 
    substituir a1 por x e aj por y

    ai | aj = x | y

    essa operacao pode ser feita diversas vezes

    qual é a soma minima possível da array?

    1111111 ai | aj

    1010101
    0101010

    3
    1 3 2    -> 3 é a soma minima que foi encontrada

    0001 - 1
    0011 - 3
    0010 - 2
    
    1 | 3 = 3 (deu o maior valor)
    1 | 2 = 2 (deu o maior valor)
    2 | 3 = 3 (deu o maior valor)

    sempre vai dar um valor menor, nao necessariamente o maior valor entre eles

    olhando a nota:
    [1, 0, 2] -> é possivel deixar a array assim
    o maior valor sumiu
    1 | 3

    Aprendendo com a questão:
    Queremos minimizar a soma


    
*/
void solve() {
    cin>>n;
    vl v(n); 
    for (ll i = 0; i < n; i++) cin>>v[i];
    
    ll sum = v[0];

    for (ll i = 1; i < n; i++) {
        sum |= v[i];
    }

    cout << sum << el;
    
}
signed main() {
    ___
    cin>>t;
    while(t--)
    solve();
    
    return 0;
}