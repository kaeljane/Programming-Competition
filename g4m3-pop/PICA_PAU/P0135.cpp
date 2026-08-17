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
// 16/08/2026 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7; // 998244353;
ll INF = 1e18 + 7;
const int MAXN = 1e5 + 5;
// matriz vll mat(n, vl(m, 0))

ll n, t, k, x, y, z, ans;
string s, a, b, c;

/* (mind) 
    Time: 16min 52sec -> 17min 43sec
    Padrão: Teoria dos Numeros -> MMC/LCM
    
    Summarize(resumir/descrever):
        N -> numero de bairros onde os casais preencheram os formulários
        Para cada bairro:
            C - Indicando a qt de casais deste bairro que preencheram
                o formulario.
            Ac.. int, indicando a periodicidade em que cada casal vai ao templo
        
        Imprimir todos os dias em que o templo precisará ser alugado, um por
        linha, sem repetição.

        - Cada casal indicou que, à partir do dia em que preecheram o
        formulário, poderia ir ao templo a cada x dias, sem falta.
        
        - Casais do mesmo bairro devem se casar no mesmo dia.

        - Dharlan decidiu realizar o casamento no primeiro dia em que todos do
        grupo estivessem no templo. 1

        - Dharlan te pediu para listar os dias em que ele precisará alugar
        o templo.

        - SEM REPETICOES!!!!!!!
        
    Deduce(deduzir/derivar/testar):
        MMC?
        
    Solve(resolver/programar):
    Change(TLE, WA):
        
*/
set<ll> anss;

ll lcm(ll a, ll b) {
    return a / __gcd(a, b) * b;
}

void solve() {
    cin>>n;
    ans = 0;
    ll mmc = 1;
    f (i, 0, n) {
        cin>>x;
        mmc = lcm(mmc, x);
    }

    anss.insert(mmc);

    
}
signed main() {
    ___
    cin>>t;
    while(t--)
    solve();

    for (auto &x : anss) {
        cout << x << el;
    }
    
    return 0;
}