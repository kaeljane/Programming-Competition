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
// 25/07/2026 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7; // 998244353;
ll INF = 1e18 + 7;
const int MAXN = 1e5 + 5;
// matriz vll mat(n, vl(m, 0))

ll n, t, k, x, y, z, ans, m;
string s, a, b, c;

/* (mind) 
    Time: 23min 57sec -> 23min 40sec -> 33min 32sec
    Padrão: matriz

    (i+1) % m != 0 || (i+1) % m != 1 
    
    kkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkk

*/
void solve() {
    cin>>n>>m;
    map<string, ll> mp;
    mp["FF0000"] = 0;
    mp["00FF00"] = 0;
    mp["0000FF"] = 0;
    mp["FFFFFF"] = 0;

    vector<string> ss;
    f (i, 0, n*m) {
        cin>>s;
        mp[s]++;
        ss.pb(s);
    }
    string borda = ss[0];
    bool b1=1;

    f (i, 0, n*m) {
        if (i < m || n*m - i <= m) {
            if (ss[i] != borda) {
                cout << "N" << el; 
                return;
            }
        }
        else if ((i+1) % m == 0 || (i+1) % m == 1) {
            if (ss[i] != borda) {
                cout << "N" << el; 
                return;
            }
        }
    }

    if (mp.size() == 4) {
        f (i, m, n*m - m) {
            if ((i+1) % m > 1) { // i > 1
                if (ss[i] == borda) { 
                    cout << "N" << el; 
                    return;
                }
            }
        }

        cout << "S" << el;
    }
    else {
        cout << "N" << el;
    }
    
    
}
signed main() {
    ___
    //cin>>t;
    //while(t--)
    solve();
    
    return 0;
}