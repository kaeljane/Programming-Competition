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

    40min

    
*/
void solve() {
    cin>>l>>c;
    // vl v(n); for (ll i = 0; i < n; i++) cin>>v[i];
    
    vector<pair<ll, ll>> serv;
    vector<pair<ll, ll>> vazio;

    f (i, 0, l) {
        f (j, 0, c) {
            cin>>ch;

            if (ch == 'X') serv.pb({i, j});
            else vazio.pb({i, j});
        }
    }

    ll d = -INF; // maior dist minima
    ll q = 0; // qt de posicoes

    for (auto &x : vazio) {
        ll distMinima = INF;

        for (auto &y : serv) {
            distMinima = min(distMinima, abs(x.fi - y.fi) + abs(x.sec - y.sec));
        }
        if (distMinima > d) {
            d = distMinima;
            q = 1;
        }
        else if (d == distMinima) {
            q++;
        }

    }

    cout << d << " " << q << el;


    
}
signed main() {
    ___
    // cin>>t;
    // while(t--)
    solve();
    
    return 0;
}