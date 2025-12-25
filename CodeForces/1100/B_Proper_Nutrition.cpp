// ------------ Discipline is remembering who you said you wanted to be^^ ------------
#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define ii pair<ll, int>
#define vi vector<int>
#define vc vector<char>
#define vb vector<bool>
#define vs vector<string>
#define vl vector<long long>
#define vd vector<long double>
#define vll vector<vector<long long>>
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define rev(v) reverse(all(v))
#define soma(v) accumulate(all(v), 0LL)
#define max_el(v) *max_element(all(v))
#define min_el(v) *min_element(all(v))
#define sz(v) ((int)(v).size())
#define vazio(v) (v).empty()
#define fi first
#define pb push_back
#define pf push_front
#define ppb pop_back
#define ppf pop_front
#define sec second
#define el '\n'
#define umap unordered_map
#define uset unordered_set
#define imp(v, t, e) copy(v.begin(), v.end(), ostream_iterator<t> (cout, e))
#define ___ ios::sync_with_stdio(false); cin.tie(nullptr);
// 25/12/2025 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7;
ll INF = 1e18 + 7;
const int MAXN = 1e6 + 5;
// matriz vll mat(n, vl(m, 0))

ll n, t, k, x, y, z, a, b;
string s, c;

/* (mind) 
    
    
*/
void solve() {
    cin>>n>>a>>b;
    
    if ( (a%2 == 0) && (b%2 == 0) && (n%2 != 0)) {
        cout << "NO" << el;
        return;
    }
    if (n%a == 0) {
        // n/a qt de grupos formados
        cout << "YES" << el;
        cout << n/a << " " << 0 << el;
        return;
    }
    if (n%b == 0) {
        cout << "YES" << el;
        cout << 0 << " " << n/b << el;
        return;
    }
    x = n/a; // dando um valor inicial para o x
    ll r = n%a;

    while (true) {
        if (r % b == 0) {
            cout << "YES" << el;
            cout << x << " " << r/b << el;
            break;
        }    
        else {
            x--;
            r += a;
        }
        if (x < 0) {
            cout << "NO" << el;
            break;
        }
    
    }
}
signed main() {
    ___
    // cin>>t;
    // while(t--)
    solve();
    
    return 0;
}