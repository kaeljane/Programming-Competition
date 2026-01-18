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
    máximo MEX possível
    encontrar uma forma de zerar algum numero!!
    o menor numero precisa ser zerado talvez

    usar contator para o mex

    4 - 4 = 0
    o prox do cnt 0 é 1 mex == 1

    0 1 1 2 3 adicione zero a todos entao para que nao ainda continue dando a mesma resposta 

    ERA SO ANALISAR A MAIOR SEQUENCIA CONSECUTIVA!!!


*/
void solve() {
    cin>>n;
    vl v(n); for (ll i = 0; i < n; i++) cin>>v[i];
    
    sort(all(v));
    v.erase(unique(all(v)), v.end());

    ll maxMex = 1;
    ll currMex = 1;

    for (ll i = 1; i < v.size(); i++) {
        if(v[i] == v[i -1] + 1) {
            currMex++;
        }
        else {
            currMex = 1;
        }
        maxMex = max(maxMex, currMex);
    }
    cout << maxMex << el;

}
signed main() {
    ___
    cin>>t;
    while(t--)
    solve();
    
    return 0;
}