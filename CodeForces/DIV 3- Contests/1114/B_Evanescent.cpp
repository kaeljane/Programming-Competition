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
// 03/08/2026 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7; // 998244353;
ll INF = 1e18 + 7;
const int MAXN = 1e5 + 5;
// matriz vll mat(n, vl(m, 0))

ll n, t, k, x, y, z, ans;
string s, a, b, c;

/* (mind) 
    Time: 1h 21min 42sec
    Padrão: 

    compressao de string's

    |f(s)| -> tamanho da string com compressao
    |s| == 0 == |f(s)| 

    nao pode deletar o s1 e sn

    precisa deletar um caracter -> ele encontrar o menor valor |f(s')|.

    - tentar nao eliminar um repetido do que
    está na ponta
    - se todos forem diferentes então [n-1]
    - se todos forem iguais [1]
    
    - tentar eliminar aquele que está so em 
    1 qt caso ideal ou eliminar qualquer um 
    que da na mesma

    no momento que eu deletar quando for 
    juntar novamente nao pode ser dois caractereres iguais juntos

    eliminar aquele que tem mais caracteres
    juntos no meio!!
    -> se nao tiver um desse jeito então
    eliminar qualquer um

    NAO, a gente precisa fazer isso, mas com
    uma condicao de se aparecer um diferente 
    guardamos esse valor e continuamos a olhar... até que apareça outro diferente.

    
*/
void solve() {
    cin>>n>>s;
    set<char> conj;

    f (i, 0, n) {
        conj.insert(s[i]);
    }

    if (conj.size() == n) {
        cout << n-1 << el;
        return;
    }
    if (conj.size() == 1) {
        cout << 1 << el;
        return;
    }
    

    k = 0;

    f (i, 0, n) {
        if (s[i] != s[i-1]) {
            k++;
        }
    }

    f (i, 1, n-1){
        if (s[i-1] == s[i+1] && s[i-1] != s[i]) {
            cout << k - 2 << el;
            return;
        }
    }

    f (i, 1, n-1) {
        if (s[i-1] != s[i] && s[i] != s[i+1]) {
            cout << k - 1 << el;
            return;
        }
    }

    cout << k << el;
        
    
}
signed main() {
    ___
    cin>>t;
    while(t--)
    solve();
    
    return 0;
}