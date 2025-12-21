// ------------ Discipline is remembering who you said you wanted to be^^ ------------
#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define ii pair<ll, int>
#define vi vector<int>
#define vc vector<char>
#define vb vector<bool>
#define vs vector<string>
#define vl vector<long long>
#define vd vector<long double>
#define vll vector<vector<long long>>
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define rev(v) reverse(all(v))
#define soma(v) accumulate(all(v), 0LL)
#define max_el(v) *max_element(all(v))
#define min_el(v) *min_element(all(v))
#define sz(v) ((int)(v).size())
#define vazio(v) (v).empty()
#define fi first
#define pb push_back
#define pf push_front
#define ppb pop_back
#define ppf pop_front
#define sec second
#define el '\n'
#define umap unordered_map
#define uset unordered_set
#define imp(v, t, e) copy(v.begin(), v.end(), ostream_iterator<t> (cout, e))
#define ___ ios::sync_with_stdio(false); cin.tie(nullptr);
// 20/12/2025 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7;
ll INF = 1e18 + 7;
const int MAXN = 1e6 + 5;
// matriz vll mat(n, vl(m, 0))

ll n, t, k, x, y, z;
string s, a, b, c;

/* (mind) 
    n -> tamanho da string
    k -> qt a ser removida
    
    n - k -> tamanho da nova string
    
    1 0
    a
    0 -> nada a ser retirado verifique se é palindromo
    
    2 0
    ab -> nada a ser retirado verifique se é palindromo

    2 1
    ba -> string de tamanho 2 e precisa ser retirado 1 entao sempre vai ser palindromo depois da remoção

    3 1
    abb -> a vai sair da jogada fica bb entao é palindromo, [tirou oq tem menor quantidade]

    3 2
    abc -> sempre que n - k == 1 entao YES

    6 2
    bacacd
        a = 2
        b = 2
        c = 2 -> ok tira oq tiver menor quantidade, caso todos sejam iguais tira qualquer um e se for retirar mais depois retira do que tiver menor qt!!

    6 2
    fagbza
        a = 2
        b = 1
        g = 1
        f = 1
        z = 1 -> retirar o de menor quantidade.

    6 2
    zwaafa
        a = 3
        f = 1
        w = 1
        z = 1 -> retirar o de menor quantidade.

    

*/
void solve() {
    cin>>n>>k;
    cin>>s;
    ll freImpar=0;
    map<char, ll> mapa;
    for (ll i=0; i < n; i++) {
        mapa[s[i]]++;
    }
    for (auto x : mapa) {
        if (x.second % 2 != 0) freImpar++;
    }

    if (freImpar > (k + 1)) {
        cout << "NO" << el;
    }
    else cout << "YES" << el;
    
}
signed main() {
    ___
    cin>>t;
    while(t--)
    solve();
    
    return 0;
}