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
// 28/07/2026 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7; // 998244353;
ll INF = 1e18 + 7;
const int MAXN = 1e5 + 5;
// matriz vll mat(n, vl(m, 0))

ll n, t, k, x, y, z, ans, m;
string s, a, b, c;

/* (mind) 
    Time: 13min 32sec
    Padrão: matriz, implementacao
    
    
*/
void solve() {
    cin>>n>>m;
    vector<vector<char>> mat(n, vector<char>(m));
    f (i, 0, n) f (j, 0, m) cin>>mat[i][j];

    f (j, 0, m) {
        ll inicio = n; // muda se achar um o
        rf (i, n-1, 0) {
            if (mat[i][j] == 'o') inicio = i;
            if (mat[i][j] == '*') {
                // descer até incio
                f (k, i, inicio-1) {
                    swap(mat[k][j], mat[k+1][j]);
                }
            }
        }
    }

    f (i, 0, n) {
        f (j, 0, m) {
            cout << mat[i][j];
        }
        cout << el;
    }

    cout << el;
    
    
}
signed main() {
    ___
    cin>>t;
    while(t--)
    solve();
    
    return 0;
}