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
// 19/08/2026 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7; // 998244353;
ll INF = 1e18 + 7;
const int MAXN = 1e5 + 5;
// matriz vll mat(n, vl(m, 0))

ll n, t, k, x, y, z, ans, k1, k2;
string s, a, b, c;

/* (mind) 
    Time: 
    Padrão: 
    
        
*/
void solve() {
    // questão G nao da para submeter no codeforces
    cin>>n>>k1>>k2>>s;
    s += '0';
    k2 = min(k2, 2*k1);
    ll cont = 0, diff = k2 - k1;
    ans = 0;


    f (i, 0, n+1) {
        if (s[i] == '1') {
            cont++;
        }
        else {
            if (cont == 1) ans += k1;
            else if (cont > 1) {
                if (cont & 1) { // impar
                    ans += (cont / 2 + 1)*k1;
                    ans += (cont/2)*diff;
                }
                else {
                    ans += (cont/2)*diff;
                    ans += (cont/2)*k1;
                }
            }
            cont = 0;
        }   
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