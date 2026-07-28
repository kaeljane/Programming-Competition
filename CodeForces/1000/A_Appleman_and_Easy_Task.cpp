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

ll n, t, k, x, y, z, ans;
string s, a, b, c;

/* (mind) 
    Time: 4min 24sec -> 9min 56sec -> 11min
    Padrão: matriz, vector de direcoes esq, dir, cima, baixo

    tem que leeeeer
    
*/
void solve() {
    cin>>n;

    vector<vector<char>> mat(n+2, vector<char>(n+2, 'x'));
    
    f (i, 1, n+1) f(j, 1, n+1) cin>>mat[i][j];
    
    ll dx[4] = {-1, +1, 0, 0};
    ll dy[4] = {0, 0, -1, 1};
    
    bool b1=1;

    f (i, 1, n+1) f(j, 1, n+1) {
        ll qt=0;

        f (k, 0, 4) {
            ll l = i + dx[k];
            ll r = j + dy[k];

            if (l >= 0 && l <= n+1 && r >= 0 && r <= n+1) {
                if (mat[l][r] == 'o') {
                    qt++;
                }
            }
        }

        if (qt&1) {cout << "NO" << el; return;}
        
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