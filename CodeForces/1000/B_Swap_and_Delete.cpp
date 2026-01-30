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
// 29/01/2026 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7;
ll INF = 1e18 + 7;
const int MAXN = 1e5 + 5;
// matriz vll mat(n, vl(m, 0))

ll n, t, k, x, y, z;
string s, a, b, c;

/* (mind) 
    01010101

    111100
    011110
    010111

    Si Ti trocar tudo

    111100
    00 nao tem mais zeros precisa contar
    0000 ans = 2
    0000 nao tem 1 para colocar no lugar do zero preciso gastar mais
    00[0][0][1][1]
    
*/
void solve() {
    cin>>s;
    n = s.size();

    ll cnt0 = 0;
    ll cnt1 = 0;

    for (ll i = 0; i < n; i++) {
        if (s[i] == '0') cnt0++;
        else cnt1++;
    }
    
    for (ll i = 0; i < n; i++) {
        if (s[i] == '0') {
            if (cnt1 > 0) cnt1--;
            else {
                cout << n - i << el;
                return;
            }
        }
        else {
            if (cnt0 > 0) cnt0--;
            else {
                cout << n - i << el;
                return;
            }
        }
    }
    cout << 0 << el;
    
}
signed main() {
    ___
    cin>>t;
    while(t--)
    solve();
    
    return 0;
}