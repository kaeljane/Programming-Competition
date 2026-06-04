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
// 03/06/2026 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7; // 998244353;
ll INF = 1e18 + 7;
const int MAXN = 1e5 + 5;
// matriz vll mat(n, vl(m, 0))

ll n, t, k, x, y, z;
string s, a, b, c;

/* (mind) 
    
    
*/
void solve() {
    cin>>n;
    
    vector<string> ans;
    ans.pb("0");
    ans.pb("1");
    
    f (i, 1, n) {
        vector<string> espelho = ans;

        reverse(all(espelho));
        f (i, 0, ans.size()) {
            ans[i] = "0" + ans[i];
        }

        f (i, 0, espelho.size()) {
            espelho[i] = "1" + espelho[i];
        }

        f (i, 0, espelho.size()) {
            ans.pb(espelho[i]);
        }
    }
    for (auto &str : ans) {
        cout << str << el;
    }

    
}
void solve2() {
    cin>>n;
    // uso de shift left <<

    // O limite é 2 elevado a 'n'
    ll limite = (1 << n);

    f (i, 0, limite) {
        // form magic
        ll gray = i ^ (i >> 1);

        rf (j, n-1, 0) {
            /*
            espurramos o bit 'j' para a ponta e usamos o AND (&) 
            com 1 para saber se ele é 0 ou 1, e já imprimimos na tela. 
            
            */ 
            cout << ((gray >> j) & 1);
        }
        cout << el;
    }

}

signed main() {
    ___
    //cin>>t;
    //while(t--)
    solve2();
    
    return 0;
}