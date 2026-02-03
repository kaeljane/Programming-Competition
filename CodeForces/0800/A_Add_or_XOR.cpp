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
// 02/02/2026 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7;
ll INF = 1e18 + 7;
const int MAXN = 1e5 + 5;
// matriz vll mat(n, vl(m, 0))

ll n, t, k, x, y, z, a, b;
string s, c;

/* (mind) 
    O que significa fazer xor de 1? focar nisso

    xor -> se for igual é false!!!

    se for par pode fazer xor
    se for impar vai diminuir o numero caso faça o xor

    so usar o xor caso o custo seja menor e for par!!!

    - so dar para diminuir com xor !!! se o numero for maior que b em mais de duas unidades entao é impossível ou 
    - caso o numero for par e maior que b!! impossivel dliminuir!!

    nao esquecer do custo

*/
void solve() {
    cin>>a>>b>>x>>y;
    
    if (a > b) {
        if (!(a&1)){
            cout << -1 << el;
        }
        else if (b+2 <= a) {
            cout << -1 << el;
        }
        else if (b+1 == a && a&1){
            cout << y << el;
        }
    }
    else {
        ll sum = 0;
        while (true) {
            if (a == b) {
                cout << sum << el;
                return;
            }
            if (!(a&1) && y < x) {
                sum += y;
                a ^= 1;
            }
            else {
                // impar custo de x
                sum += x;
                a++;
            }
        }
    }
    
    

    
}
signed main() {
    ___
    cin>>t;
    while(t--)
    solve();
    
    return 0;
}