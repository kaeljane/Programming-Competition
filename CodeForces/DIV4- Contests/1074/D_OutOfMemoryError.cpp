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
// 18/01/2026 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7;
ll INF = 1e18 + 7;
const int MAXN = 1e6 + 5;
// matriz vll mat(n, vl(m, 0))

ll n, t, k, x, y, z, m, h;
string s, a, b, c;

/* (mind) 
    n -> tamanho da array
    m -> o numero de operacoes que podem ser performadas
    h -> valor maximo para o crash
    
    busca binaria com accumulate...

    queremos achar o ultimo h pq depois dele nao vai ser zerada a array NAO

    questao modelo

*/
void solve() {
    cin>>n>>m>>h;
    vl v(n); 
    vl currV(n);
    set<ii> s;

    for (ll i = 0; i < n; i++) {
        cin>>v[i];
        currV[i] = v[i];
        s.insert({currV[i], i}); // arm idx
    }

    vl historico;

    vector<bool> inHistorico(n, false);

    vector<ii> ops(m);


    for (ll k = 0; k < m; k++) {
        ll idx;
        ll val;
        cin>>idx>>val;
        idx--;

        s.erase({currV[idx], idx});
        currV[idx] += val;
        s.insert({currV[idx], idx});

        if (!inHistorico[idx]) {
            historico.pb(idx);
            inHistorico[idx] = true;
        } 

        if (s.rbegin()->first > h) {
            for (ll x : historico) {
                s.erase({currV[x], x});
                currV[x] = v[x];
                s.insert({currV[x], x});
                inHistorico[x] = false;
            }
            historico.clear();
        }
    }

    for (ll i = 0; i < n; i++) {
        cout << currV[i];
        if (i == n - 1) cout << "";
        else cout << " ";
    }
    cout << el;

    
}
signed main() {
    ___
    cin>>t;
    while(t--)
    solve();
    
    return 0;
}