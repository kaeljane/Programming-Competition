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
// 12/04/2026 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7; // 998244353;
ll INF = 1e18 + 7;
const int MAXN = 1e5 + 5;
// matriz vll mat(n, vl(m, 0))

ll n, t, k, x, y, z, d;
string s, a, b, c;

/* (mind) 
    55m 08s
    
*/
void solve() {
    cin>>n>>d;
    ll timesFormados = 0;
    vector<ll> v; 
    for (ll i = 0; i < n; i++) {
        cin>>x;
        if (x > d) {
            timesFormados++;
        }
        else {
            v.pb(x);
        }
    }

    sort(all(v));
    
    ll tam = v.size();
    deque<ll> decao;
    for (ll i = 0; i < tam; i++) {
        decao.pb(v[i]);
    }

    while (!decao.empty()) {
        ll maior = decao.back();
        decao.pop_back();

        ll pegos = 0;
        ll need = (d + 1) / maior; // piso tudo bem por enquanto
        if ((d+1) % maior == 0) { // edge case
            need--;
        }
        for (ll i = 0; i < need; i++) { // edge case CUIDADO
            if (!decao.empty()) {
                decao.pop_front();
                pegos++;
            }
            else {
                cout << timesFormados << el;
                return;
            }
        }
        if (pegos == need) timesFormados++;
        else {
            cout << timesFormados << el;
            return;
        }
    }

    cout << timesFormados << el;




    

    
}
signed main() {
    ___
    // cin>>t;
    // while(t--)
    solve();
    
    return 0;
}