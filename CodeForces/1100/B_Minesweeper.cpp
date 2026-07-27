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
// 27/07/2026 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7; // 998244353;
ll INF = 1e18 + 7;
const int MAXN = 1e5 + 5;
// matriz vll mat(n, vl(m, 0))

ll n, t, k, x, y, z, ans, m;
string s, a, b, c;
char aa;

/* (mind) 
    Time: 25min 51sec -> 29min 9sec -> 33min 28sec
    Padrão: matriz, propagacao

    treinando padrao

    
*/

ll dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
ll dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

void solve() {
    cin>>n>>m;

    vll adj(n+2, vl(m+2, 0)); //
    vll mat(n+2, vl(m+2, 0)); //

    vll bombs(n+2, vl(m+2, 0));

    f (i,1,n+1) {
        f (j,1,m+1) {
            cin>>aa;
            
            if (aa == '*') {
                bombs[i][j] = 1;
                f (k,0,8) {
                    adj[i + dx[k]][j + dy[k]]++;
                }
            }
            else if (aa != '.') mat[i][j] = aa - '0';
            
        }
    }

    bool b1 = 1;

    f (i,1,n+1) {
        f (j,1,m+1) {
            if ( !bombs[i][j] && adj[i][j] != mat[i][j]) {
                cout << "NO" << el;
                return;       
            }
        }
    }
    cout << "YES" << el;
    
}
signed main() {
    ___
    //cin>>t;
    //while(t--)
    solve();
    
    return 0;
}