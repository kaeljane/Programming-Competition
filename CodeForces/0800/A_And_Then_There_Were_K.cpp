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
// 31/01/2026 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7;
ll INF = 1e18 + 7;
const int MAXN = 1e5 + 5;
// matriz vll mat(n, vl(m, 0))

ll n, t, k, x, y, z;
string s, a, b, c;

/* (mind) 
    tempo limite

    first case
    2 -> 1
    010 & 010 = (os dois numeros sao iguais!!)

    o do parentese sempre vai ser = 4, 3, 2, 1..
    second case test
    0101 & (5-1)=4
    0101 & 0100 (tirou um bit)
    0100 = 4 (vira 4) 
    0100 & (5-2)=3
    0100 & 0011 = 0000 (nao tem nenhum bit ligado em comum).

    thirt case test
    10001 & (17 - 1)=16
    10001 & 10000 = 10000 (parece que esta prevalencendo o menor numero)
    10000 & (17 - 2) = 15 (nao tem nenhum bit em comum entao esse é o resultado!!)


    
*/
void solve() {
    cin>>n;
    
    ll p = 1;
    while (p * 2 <= n) {
        p *= 2;
    }

    cout << p - 1 << el;
     
}
signed main() {
    ___
    cin>>t;
    while(t--)
    solve();
    
    return 0;
}