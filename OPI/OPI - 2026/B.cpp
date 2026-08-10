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
// 09/08/2026 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7; // 998244353;
ll INF = 1e18 + 7;
const int MAXN = 1e5 + 5;
// matriz vll mat(n, vl(m, 0))

ll n, t, k, x, y, z, ans;
string s, a, b, c;

/* (mind) 
    Time: 
    Padrão: 

    teoria dos jogos

    Os dois estão jogando um jogo solitário e 
    independente
    
    Em problemas de Teoria dos Jogos como esse, a
    solução costuma ser uma contagem inteligente
    ou uma simulação gulosa simplificada.

    Celulas 
        Exclusivas de Alice
        Exclusivas de Bob
        Compartilhadas
    
    Analisar isso

    Sabendo que a estratégia ótima é sempre 
    priorizar roubar as células compartilhadas 
    antes de gastar as suas exclusivas, você 
    consegue determinar o vencedor apenas contando
     o tamanho desses conjuntos e simulando as 
     jogadas matematicamente em O(n)

    A Letícia (Alice) só vence se ela tiver 
    estritamente mais opções de jogada iniciais do 
    que o Lucas (Bob).


*/
void solve() {
    cin>>n>>s;
    
    ll cont_a = 0;
    ll cont_b = 0;

    f (i, 0, n) {
        if (s[i] == '.') {
            bool adj_a = 0, adj_b = 0;

            // verif vizinho da esquerda
            if (i > 0) {
                if (s[i-1] == 'a') adj_a = 1;
                if (s[i-1] == 'b') adj_b = 1;
            }

            // verif vizinho da direita
            if (i < n-1) {
                if (s[i+1] == 'a') adj_a = 1;
                if (s[i+1] == 'b') adj_b = 1;
            }

            // se não tem 'a' do lado, Leticia pode jogar aqui
            if (!adj_a) cont_a++;

            // se não tem 'b' do lado, Lucas pode jogar aqui
            if (!adj_b) cont_b++;
        }
    }
    // Alice começa. Ela só ganha se tiver estritamente + opcoes
    if (cont_a > cont_b) cout << "alice" << el;
    else                 cout << "bob" << el;
    
}
signed main() {
    ___
    cin>>t;
    while(t--)
    solve();
    
    return 0;
}
