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
// 23/06/2026 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7; // 998244353;
ll INF = 1e18 + 7;
const int MAXN = 1e5 + 5;
// matriz vll mat(n, vl(m, 0))

ll n, t, k, x, y, z, ans;
string s, a, b, c;

/* (mind) 
       ____
      /    \
     /      \
    /___     \____
        \        /
         \      /
          \____/
    
*/
void solve() {
    cin>>n;
    for (ll i = 0; i < n; i++) {
        cout << " ";
    }
    for (ll i = 0; i < n+1; i++) {
        cout << "_";
    }
    cout << el;

    // sec linha
    ll qtEspInicial = n-1;  // vai diminuindo 1 com o tempo
    ll qtEspMeio = n+1;     // vai aumentando 1 com o tempo
    for (ll i = 0; i < n-1; i++) {
        f (j,0,qtEspInicial) cout << " ";
        qtEspInicial--;
        cout << "/";

        f (j,0,qtEspMeio) cout << " ";
        qtEspMeio+=2;
        cout << "\\" << el;
    }
        
    cout << "/";
    for (ll i = 0; i < n; i++) {
        cout << "_";
    }
    for (ll i = 0; i < qtEspMeio-n; i++) {
        cout << " ";
    }
    cout << "\\";
    for (ll i = 0; i < n+1; i++) {
        cout << "_";
    }
    cout << el;
    
    
    // finalzin
    qtEspInicial = n+1;
    // qtEspMeio = n+5;
    f (i,0,n-1) {
        for (ll j = 0; j < qtEspInicial; j++) {
            cout << " ";
        }
        qtEspInicial++;
        cout << "\\";
        for (ll j = 0; j < qtEspMeio; j++) {
            cout << " ";
        }
        qtEspMeio-=2;
        cout << "/";
        cout << el;
    }
    // ultima
    f (i,0,qtEspInicial) {
        cout << " ";
    }
    cout << "\\";
    f (i,0,qtEspMeio) {
        cout << "_";
    }
    cout << "/";


    
}
signed main() {
    ___
    //cin>>t;
    //while(t--)
    solve();
    
    return 0;
}