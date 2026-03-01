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
// 01/03/2026 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7;
ll INF = 1e18 + 7;
const int MAXN = 1e5 + 5;
// matriz vll mat(n, vl(m, 0))

ll n, t, k, x, y, z, a, b, c, calculo;
string s;

/* (mind) 
    PrefixSum + Binary Search
    
*/
void solve() {
    cin>>n>>a>>b>>c;
    
    ll l = 0, r = 10e9;

    ll ans = INF;
    while ( l <= r ) {
        ll meio = l + (r - l)/2; // meio vai ser igual ao dia

        // Calculo//////
        ll diasCompletos = meio/3;
        ll resto = meio % 3;
        if (resto == 1) {
            calculo = diasCompletos*(a+b+c) + a;
        }
        else if (resto == 2) {
            calculo = diasCompletos*(a+b+c) + (a + b);
        }
        else {
            calculo = diasCompletos*(a+b+c);
        }
        /////////////////

        if (calculo == n) {
            cout << meio << el;
            return;
        }

        if (calculo >= n) {
            ans = min(ans, meio);
            r = meio - 1;
        }
        else if (calculo < n) {
            l = meio + 1;
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