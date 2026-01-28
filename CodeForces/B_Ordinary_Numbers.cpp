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
// 28/01/2026 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7;
ll INF = 1e18 + 7;
const int MAXN = 1e5 + 5;
// matriz vll mat(n, vl(m, 0))

ll n, t, k, x, y, z;
string s, a, b, c;

/* (mind) 
    77/11 = 7

    n - > 10^9

    1, 2, 3, 4, 5, 6, 7, 8, 9, 11, 22, 33, 44, 55, 66, 77,

    
*/
void solve() {
    cin>>n;

    vl lista = {
        1, 2, 3, 4, 5, 6, 7, 8, 9, 
        11, 22, 33, 44, 55, 66, 77, 88, 99, 
        111, 222, 333, 444, 555, 666, 777, 888, 999, 
        1111, 2222, 3333, 4444, 5555, 6666, 7777, 8888, 9999, 
        11111, 22222, 33333, 44444, 55555, 66666, 77777, 88888, 99999, 
        111111, 222222, 333333, 444444, 555555, 666666, 777777, 888888, 999999, 
        1111111, 2222222, 3333333, 4444444, 5555555, 6666666, 7777777, 8888888, 9999999,
        11111111, 22222222, 33333333, 44444444, 55555555, 66666666, 77777777, 88888888, 99999999,
        111111111, 222222222, 333333333, 444444444, 555555555, 666666666, 777777777, 888888888, 999999999,
        1111111111, 2222222222, 3333333333, 4444444444, 5555555555, 6666666666, 7777777777, 8888888888, 9999999999,
        11111111111, 22222222222, 33333333333, 44444444444, 55555555555, 66666666666, 77777777777, 88888888888, 99999999999
};
    ll cnt = 0;
    for (ll i = 0; ; i++) {
        if (lista[i] <= n) cnt++;
        else {
            cout << cnt << el;
            return;
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