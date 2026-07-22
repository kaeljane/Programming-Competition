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
// 21/07/2026 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7; // 998244353;
ll INF = 1e18 + 7;
const int MAXN = 1e5 + 5;
// matriz vll mat(n, vl(m, 0))

ll n, t, k, x, y, z, ans, m;
string s, a, b, c;

/* (mind) 
    Time: 7min 3sec -> 12min 36sec -> 17min 10sec -> testando formula
    Padrão: visualizacao
    
*/
void solve2() {
    cin>>n>>m;

    if (n == m && !(n&1)) {
        cout << n + m - 1 + (m - 2) + (m - 1) << el;
    }
    else {
        cout << n + (m - 1) + 2*(min(n, m) - 1) << el;
    }


}

void solve() {
    cin>>n>>m;

    ll menor = min(n, m);
    ll maior = max(n, m);

    if (menor == maior && menor % 2 == 0) {
        cout << 4 * menor - 4 << el;
    }
    else {
        cout << 3 * menor + maior - 3 << el;
    }

}
signed main() {
    ___
    //cin>>t;
    //while(t--)
    solve();
    
    return 0;
}