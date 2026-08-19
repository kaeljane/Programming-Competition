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
// 19/08/2026 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7; // 998244353;
ll INF = 1e18 + 7;
const int MAXN = 1e5 + 5;
// matriz vll mat(n, vl(m, 0))

ll n, t, k, x, y, z, ans;
string s, a, b, c;

/* (mind) 
    Time: 19min 54sec 
    Padrão: matriz
    
    (FIZ em folha )
        Summarize(resumir/descrever):
            
            
        Deduce(deduzir/derivar/testar):
            
            
        Solve(resolver/programar):
        Change(TLE, WA):
        
*/
void solve() {
    cin>>n;
    ans = 0;
    vector<vector<char>> mat(n, vector<char>(n, ' '));
    vector<vector<ll>> anss(n, vector<ll>(n, 0));
    f (i, 0, n) f (j, 0, n) cin>>mat[i][j];

    ll dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
    ll dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

    f (i, 0, n) {
        f (j, 0, n) {
            ans = 0;
            if (mat[i][j] == '*') anss[i][j] = 9;
            else {
                f (k, 0, 8) {
                    if (i + dx[k] >= 0 && i + dx[k] < n && 
                        j + dy[k] >= 0 && j + dy[k] < n) {
                            if (mat[i + dx[k]][j + dy[k]] == '*') ans++; 
                    }
                }
                anss[i][j] = ans;
            }
        }
    }

    f (i, 0, n) {
        f (j, 0, n) {
            cout << anss[i][j];
        }
        cout << el;
    }
    
}
signed main() {
    ___
    //cin>>t;
    //while(t--)
    solve();
    
    return 0;
}