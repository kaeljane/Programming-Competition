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
// 26/07/2026 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7; // 998244353;
ll INF = 1e18 + 7;
const int MAXN = 1e5 + 5;
// matriz vll mat(n, vl(m, 0))

ll n, t, k, x, y, z, ans, d, q;
string s, a, b, c;

/* (mind) 
    Time: 37min 31sec -> testando...
    Padrão: matriz, propagacao

    preciso treinar mais questoes assim
    
*/

ll dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
ll dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

void solve() {
    cin>>d>>q;

    vll adj(25, vl(25, 0));
    bool b1 = 1;

    f (i, 0, q) {
        cin>>x>>y; x++; y++;

        bool pode = 1;
        f (k, 0, 8) {
            if (adj[x + dx[k]][y + dy[k]] == 4) {
                pode = 0;
                break;
            }
        }

        if (!pode) b1=0;
        else {
            f (k, 0, 8) {
                adj[x + dx[k]][y + dy[k]]++;
            }
        }

    }

    if (b1) cout << "True" << el;
    else cout << "False" << el;


}
signed main() {
    ___
    //cin>>t;
    //while(t--)
    solve();
    
    return 0;
}