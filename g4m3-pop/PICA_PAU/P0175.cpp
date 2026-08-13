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
// 12/08/2026 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7; // 998244353;
ll INF = 1e18 + 7;
const int MAXN = 1e5 + 5;
// matriz vll mat(n, vl(m, 0))

ll n, t, k, x, y, z, ans, a, p, c;
string s, b;

/* (mind) 
    Time: 22min
    Padrão: string

    sinto que fiz no automatico... sono

*/
void solve() {
    cin>>n>>s; 
    ans = 0; 
    
    vl v(n); 
    f (i, 0, n) {
        if (s[i] == 'X') x = i;
        if (s[i] == 'P') p = i;
        if (s[i] == 'A') a = i;
        if (s[i] == 'C') c = i;
    }

    bool pp=1, cc=1;
    if (p > a) {
        // rf
        rf (i, p, a) {
            if (s[i] == 'X'){pp = 0; break;}
        }

    }
    else if (p < a) {
        // f
        f (i, p, a+1) {
            if (s[i] == 'X') {pp = 0; break;}
        }
    }

    if (c > a) {
        rf (i, c, a) {
            if (s[i] == 'X'){cc = 0; break;}
        }
    }
    else if (c < a) {
        // f
        f (i, c, a+1) {
            if (s[i] == 'X') {cc = 0; break;}
        }
    }

    if (pp && cc) {
        // verificar se os abs sao iguais
        if (abs(p-a) == abs(c-a)) cout << "FUGIU!" << el;
        else {
            if (abs(p-a) < abs(c-a)) cout << "P " << abs(p-a) << el;
            else {
                cout << "C " << abs(c-a) << el;
            }
        }
    }
    else if (pp) {
        cout << "P " << abs(p-a) << el;
    }
    else if (cc) {
        cout << "C " << abs(c-a) << el;
    }
    else cout << "FUGIU!" << el;
    
    
}
signed main() {
    ___
    cin>>t;
    while(t--)
    solve();
    
    return 0;
}