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
// 29/07/2026 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7; // 998244353;
ll INF = 1e18 + 7;
const int MAXN = 1e5 + 5;
// matriz vll mat(n, vl(m, 0))

ll n, t, k, x, y, z, ans;
string s, a, b, c;

/* (mind) 
    Time: 
    Padrão: 
    
*/

void rotacao90(vector<string> &mat) {
    f (i, 0, 3) {
        f (j, i+1, 3) {
            swap(mat[i][j], mat[j][i]);
        }
    }

    f (i, 0, 3) {
        reverse(mat[i].begin(), mat[i].end());
    }
}

void solve() {
    vector<string> mat(3);
    f (i, 0, 3) cin>>mat[i];
    
    vector<string> mat180 = mat;

    rotacao90(mat180);
    rotacao90(mat180);

    if (mat == mat180) {
        cout << "YES" << el;
    }
    else cout << "NO" << el;
    
}
signed main() {
    ___
    //cin>>t;
    //while(t--)
    solve();
    
    return 0;
}