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
// 31/08/2026 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7; // 998244353;
ll INF = 1e18 + 7;
const int MAXN = 1e5 + 5;
// matriz vll mat(n, vl(m, 0))

ll n, t, k, x, y, z, ans;
string s, a, b, c;

/* (mind) 
    Time: 25min 52sec
    Padrão: 

    S:
        Junte as fichas numeradas e viaje para o méxico

        A fase dois consistia em dividir as fichas em
        grupos, e dependendo da divisão a viagem poderia
        ficar barata ou cara.

        k passagens

        fichas / k grupos

        0 1 2 3
        -> preço de passagem para esse grupo é quatro.

        0 2 3 6 7

    D:
        coloca os zeros em um só grupo.
        para a resp ser 1
        logo coloca os restantes nos grupos que ainda faltam. 
        ou seja todos os grupos terao valor 1
    
        
*/
void solve() {
    cin>>n>>k;
    ans = 0;
    ll qtZeros = 0, diffZero = 0;
    vl v(n); f (i, 0, n) {
        cin>>v[i];
        if (v[i] == 0) {
            qtZeros++;
        }
    }

    diffZero = n - qtZeros;
    if (qtZeros == 0) {
        cout << 0 << el;
        return;
    }
    if (diffZero < k) {
        // precisa tirar uma qt de zeros do primeiro grupo;
        ll falta = k - diffZero; // qt de 1's consequentemente
        ans += falta;
    }
    else {
        ans = 1;
    }

    cout << ans << el;


    
    
}
signed main() {
    ___
    cin>>t;
    while(t--)
    solve();
    
    return 0;
}