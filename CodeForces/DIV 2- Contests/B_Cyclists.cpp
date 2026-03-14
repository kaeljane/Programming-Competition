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
// 14/03/2026 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7;
ll INF = 1e18 + 7;
const int MAXN = 1e5 + 5;
// matriz vll mat(n, vl(m, 0))

ll n, t, k, x, y, z, p, m;
string s, a, b, c;

/* (mind) 
    jogar cartas para derrotar seu oponente

    o custo nao pode exceder m.
    
    imprima um inteiro em uma linha, denotando o número
 máximo de vezes que a condição de vitória pode ser 
jogada.

    n -> numero de cartas
    k -> posicoes iniciais
    p -> onde a carta será colocada
    m -> o custo nao pode exceder

*/
void solve() {
    cin>>n>>k>>p>>m;

    ll energiaWinCondition = 0;
    vector<ll> cartasAntesWin;
    vector<ll> todasOutrasCartas;
    ll custo;

    for (ll i = 0; i < n; i++) {
        cin>>custo;

        if (i == p - 1) {
            energiaWinCondition = custo;
        }
        else {
            todasOutrasCartas.pb(custo);
            if (i < p - 1) {
                cartasAntesWin.pb(custo);
            }
        }
    }

    ll custoFase1 = energiaWinCondition;

    if (p > k) {
        sort(all(cartasAntesWin));
        ll cartasParaSacrificar = p - k; //

        for (ll i = 0; i < cartasParaSacrificar; i++) {
            custoFase1 += cartasAntesWin[i];
        }
    }

    if (m < custoFase1) {
        cout << 0 << el;
        return;
    }

    m -= custoFase1;
    ll vezesUsadas = 1;

    ll custoCiclo = energiaWinCondition;

    sort(all(todasOutrasCartas));
    ll cartasParaSacrificar = n - k;

    for (ll i = 0; i < cartasParaSacrificar; i++) {
        custoCiclo += todasOutrasCartas[i];
    }

    vezesUsadas += (m/custoCiclo);

    cout << vezesUsadas << el;

    
}
signed main() {
    ___
    cin>>t;
    while(t--)
    solve();
    
    return 0;
}