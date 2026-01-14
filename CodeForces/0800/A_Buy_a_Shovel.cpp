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
// 14/01/2026 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7;
ll INF = 1e18 + 7;
const int MAXN = 1e6 + 5;
// matriz vll mat(n, vl(m, 0))

ll n, t, k, x, y, z, r;
string s, a, b, c;

/* (mind) 
    saldo k burles
    existe um numero infinito de par na loja

    numero ilimitado de 10-burles coins e 
    r one burles
    
    não pode receber troco

    k -> preço da par
    r -> unidades de one burles

    117 / 10 = [7]

    D = d * q + r
        117*q + 3
    esse valor nao pode deixar resto

    15*2 = 30/10 resto zero !
*/
void solve() {
    cin>>k>>r;

    for (ll i = 1; i < 1000; i++) {
        if ((k*i) % 10 == r || (k*i) % 10 == 0) {
            cout << i << el;
            return;
        }
    }
    
}
signed main() {
    ___
    // cin>>t;
    // while(t--)
    solve();
    
    return 0;
}