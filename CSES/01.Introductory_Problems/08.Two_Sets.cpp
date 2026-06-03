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
// 03/06/2026 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7; // 998244353;
ll INF = 1e18 + 7;
const int MAXN = 1e5 + 5;
// matriz vll mat(n, vl(m, 0))

ll n, t, k, x, y, z;
string s, a, b, c;

/* (mind) 
    19min 30sec
    
*/
void solve() {
    cin>>n;

    ll somaa = 0;
    vector<ll> v;
    f (i, 1, n+1) {somaa += i;}

    if (!(somaa&1)) {
        ll numEsq = 0;
        ll somaEsq = 0; //
        set<ll> esq;
        rf (i, n, 1) {
            if ( somaEsq + i <= somaa/2) {
                somaEsq += i;
                numEsq++;
                esq.insert(i);
            }
        }
        
        
        set<ll> dir;
        ll somaDir = 0;
        f (i, 1, n+1) {
            if (!esq.count(i)) {
                somaDir += i;
                dir.insert(i);
            }
        }
    
        if (somaEsq == somaDir) {
            // output's
            cout << "YES" << el << esq.size() << el;
            for (auto &x : esq) {
                cout << x << " ";
            }
            cout << el;
        
            cout << dir.size() << el;
            for (auto &x : dir) {
                cout << x << " ";
            }
            cout << el;    
        }
        else cout << "NO" << el;
    

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