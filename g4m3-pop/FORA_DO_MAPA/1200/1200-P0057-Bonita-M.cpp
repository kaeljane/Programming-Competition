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

ll n, t, k, x, y, z;
string s, a, b, c;

/* (mind) 
    n == 1 cuidado e n == 2
    todos estao cercados??

    C -> cangaceitos
    M -> inimigos
    - vazio
    
    linha 0   | verificar 
    coluna n-1 | verificar cima, baixo e esquerda

    coluna 0
    linha n-1

    56min 43sec

    
*/
bool check(vector<string> &mat, ll i, ll j) {
    n = mat.size();
    
    vector<ll> dx = {-1, 1, 0, 0};
    vector<ll> dy = {0, 0, -1, 1};

    f (k, 0, 4) {
        ll viz_i = i + dx[k];
        ll viz_j = j + dy[k];

        if (viz_i >= 0 && viz_i < n && viz_j >= 0 && viz_j < n) {
            if (mat[viz_i][viz_j] == '-') {
                return false;
            }
        }
    }
    return true;
    
}
void solve() {
    cin>>n;
    vector<string> mat(n);

    f (i, 0, n) {
        cin>>mat[i];
    }

    if (n == 1) {
        cout << "SUCCESS" << el;
        return;
    }
    f (i, 0, n) {
        f (j, 0, n) {
            if (mat[i][j] == 'M') {
                if (!check(mat, i, j)) {
                    cout << "FAIL" << el;
                    return;
                }
            }
        }
    }

    cout << "SUCCESS" << el;
    
}
signed main() {
    ___
    // cin>>t;
    // while(t--)
    solve();
    
    return 0;
}