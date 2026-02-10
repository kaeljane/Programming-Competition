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
// 10/02/2026 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7;
ll INF = 1e18 + 7;
const int MAXN = 1e5 + 5;
// matriz vll mat(n, vl(m, 0))

ll n, t, k, x, y, z;
string s, a, b, c;

/* (mind) 
    é possível que ele vá para a [casa de cima]
        se nao houver piao nesse local

    é possível que ele va para a [diagonal esquerda]
        é possível que ele vá para a [diagonal direita]
            se houver um piao inimigo nessas casas.

    tres situações
        o piao conseguir pegar alguem
        o piao nao conseguir pegar MAS NAO TER NINGUEM NO FUNDO ENTAO ELE CONSEGUIR CHEGAR ATÉ LÁ
        o piao nao conseguir pegar E TER UM PIAO LÁ IMPEDINDO DELE CHEGAR NA LINHA
    
*/
void solve() {
    cin>>n;
    string v; cin>>v;
    string v2; cin>>v2;
    
    ll qt = 0;
    for (ll i = 0; i < n; i++) {
        if (v2[i] == '1') {
            if (i == 0) {
                if (v[i] == '0') {
                    qt++;
                    v[i] = '2';
                }
                else if (i < n-1 && v[i+1] == '1') {
                    qt++;
                    v[i+1] = '2';
                }
            }
            else {
                // verificar se tem um 1 na esquerda
                // Caso nao tenha verificar se tem um no meio se nao tiver entao simplesmente vá e add mais um na variavel
                // Caso nao tenha nenhuma das anteriores entao verifique se tem um peao na direita
                if (v[i-1] == '1') {
                    qt++;
                    v[i-1] = '2';
                }
                else if (v[i] == '0') {
                    qt++;
                    v[i] = '2';
                }
                else if ( i+1 < n && v[i+1] == '1') {
                    qt++;
                    v[i+1] = '2';
                }
            }
        }

    }
    cout << qt << el;

    

    
}
signed main() {
    ___
    cin>>t;
    while(t--)
    solve();
    
    return 0;
}