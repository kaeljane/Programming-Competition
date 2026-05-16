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
// 16/05/2026 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7; // 998244353;
ll INF = 1e18 + 7;
const int MAXN = 1e5 + 5;
// matriz vll mat(n, vl(m, 0))

ll n, t, k, x, y, z, m;
string s, a, b, c;

/* (mind) 
    construir um tabuleiro
    ir até n-1 nao inclusive linha e coluna

    21min 48sec
    
*/
void solve() {
    cin>>n>>m;

    vll mat(n, vl(n, 1));

    if (n == 1) {
        cout << 1 << el;
        return;
    }

    f (i, 0, n-1) {
        f (j, 0, n-1) {
            mat[i][j+1] = mat[i][j]*2 % m;
            mat[i+1][j] = mat[i][j]*2 % m;
        }
    }
    mat[n-1][n-1] = mat[n-2][n-1]*2 % m;

    f (i, 0, n) {
        f (j, 0, n) {
            cout << mat[i][j] << " ";
        }
        cout << el;
    }

    
}
signed main() {
    ___
    // cin>>t;
    // while(t--)
    solve();
    
    return 0;
}