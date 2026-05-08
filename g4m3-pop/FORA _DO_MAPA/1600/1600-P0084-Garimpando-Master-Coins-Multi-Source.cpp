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
// 08/05/2026 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7; // 998244353;
ll INF = 1e18 + 7;
const int MAXN = 1e5 + 5;
// matriz vll mat(n, vl(m, 0))

ll n, t, k, x, y, z, l, c;
string s, a, b;
char ch;

/* (mind) 
    Colocar o mais distante possível dos servidores.
    Posicionar o maior número de mineradoras possível.

    x -> indica que há um servidor naquela posição.
    . -> Indica uma posição onde pode ser colcoado um minerador.


    saída:
        D -> maior distância em que se pode colocar mineradores no data center
        Q -> número de posicoes com distância exatamente D que existem no
            DataCenter

    Aprendendo Multi-Source. usado template

    30min 
    
*/
void solve() {
    cin>>l>>c;

    vector<ll> dl = {-1, 1, 0, 0};
    vector<ll> dc = {0, 0, -1, 1};
    
    vector<string> grid(l);
    f (i, 0, l) cin>>grid[i];

    // mat
    vector<vector<ll>> dist(l, vector<ll>(c, -1));
    queue<pair<ll, ll>> fila;

    // colocando todos os serv na fila com distancia 0;
    f (i, 0, l) {
        f (j, 0, c) {
            if (grid[i][j] == 'X') {
                dist[i][j] = 0;
                fila.push({i, j});
            }
        }
    }
    
    ll disMaxima = 0;

    // bfs padrao
    while (!fila.empty()) {
        auto atual = fila.front();
        fila.pop();

        ll lAtual = atual.fi;
        ll cAtual = atual.sec;

        f (i, 0, 4) { // até 4 por causa das direcoes 
            ll nL = lAtual + dl[i];
            ll nC = cAtual + dc[i];

            if (nL >= 0 && nL < l && nC >= 0 && nC < c ) { // ver lim da matriz
                if (dist[nL][nC] == -1) { // se ainda nao foi calculada
                    dist[nL][nC] = dist[lAtual][cAtual] + 1;

                    // att o max da quest
                    disMaxima = max(disMaxima, dist[nL][nC]);
    
                    fila.push({nL, nC});
                }
            }
        }
    }

    ll qt = 0;
    f (i, 0, l) {
        f (j, 0, c) {
            if (grid[i][j] == '.' && dist[i][j] == disMaxima) {
                qt++;
            }
        }
    }

    cout << disMaxima << " " << qt << el;

}
signed main() {
    ___
    // cin>>t;
    // while(t--)
    solve();
    
    return 0;
}