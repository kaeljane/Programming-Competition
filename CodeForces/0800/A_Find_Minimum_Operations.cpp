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
// 06/02/2026 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7;
ll INF = 1e18 + 7;
const int MAXN = 1e5 + 5;
// matriz vll mat(n, vl(m, 0))

ll n, t, k, x, y, z;
string s, a, b, c;

/* (mind) 
    x -> 0, 1, 2, 3...

    output -> minimum number of operations on a new line.


    contar bits ligados

    5 em bit
    0101 precisa ter esses numeros ligados. ai vamos remover a maior parte possivel
    
    dividir pelo numero isso sao a quantidade que pode tirar 

    5 / 2 = 2
    3/5 = 0 + 3

    5 2
    ans += 5 % 2; ans = 1; 
    n = 5 / 2; n = 1; 

    1 += 1 % 2; 1 += 1 [ans = 2];
    n = 1/2 | n = 0

*/
void solve() {
    cin>>n>>k;

    if (k == 1) {
        cout << n << el;
        return;
    }
    ll ans = 0;
    while (n > 0) {
        ans += n % k;  
        n /= k;
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