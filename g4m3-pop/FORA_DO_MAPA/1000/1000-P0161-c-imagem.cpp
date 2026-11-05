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
// 14/05/2026 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7; // 998244353;
ll INF = 1e18 + 7;
const int MAXN = 1e5 + 5;
// matriz vll mat(n, vl(m, 0))

ll n, t, k, x, y, z, m;
string s, a, b, c;

/* (mind) 
    65min 40sec
    
*/
void solve() {
    cin>>n>>m;

    vl v(n); 
    vector<vector<char>> mat(n, vector<char>(m));
    string azul = "0000FF"; string red = "FF0000"; string verde = "00FF00"; string branca = "FFFFFF";

    bool ans = true;
    f (l, 0, n) {
        f (c, 0, m) {
            cin>>s;
            if (s == azul) {
                mat[l][c] = 'A';
            }   
            else if (s == red) {
                mat[l][c] = 'R';
            } 
            else if (s == verde) {
                mat[l][c] = 'V';
            }
            else if (s == branca) {
                mat[l][c] = 'B';
            }
            else {
                ans = false;
            }
        }
    }
    if (!ans) {cout << "N" << el; return;} 
    
    // verificando borda

    // primeira coluna
    f (l, 0, n) {
        if (mat[l][0] != mat[0][0]) {cout << "N" << el; return;}
    }
    f (c, 0, m) {
        if (mat[0][c] != mat[0][0]) {cout << "N" << el; return;}
    }
    f (l, 0, n) {
        if (mat[l][m-1] != mat[0][0]) {cout << "N" << el; return;}
    }
    f (c, 0, m) {
        if (mat[n-1][c] != mat[0][0]) {cout << "N" << el; return;}
    }

    f (l, 1, n-1) {
        f (c, 1, m-1) { if (mat[l][c] == mat[0][0]) { cout << "N" << el; return; }}
    }

    cout << "S" << el;
    
    
}
signed main() {
    ___
    // cin>>t;
    // while(t--)
    solve();
    
    return 0;
}