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
// 22/07/2026 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7; // 998244353;
ll INF = 1e18 + 7;
const int MAXN = 1e5 + 5;
// matriz vll mat(n, vl(m, 0))

ll n, t, k, x, y, z, ans;
string s, a, b, c;

/* (mind) 
    Time: 17min 14sec -> 20min 45sec
    Padrão: array
    

*/
void solve() {
    cin>>n;

    ll pos1 = -1, pos2 = -1, pos3 = -1, minn = INF;

    f (i, 0, n) {
        cin>>x;
        if (x == 1) pos1 = i;
        else if (x == 2) pos2 = i;
        else if (x == 3) pos3 = i;
        
        if (pos1 != -1 && pos2 != -1 && pos3 != -1) {
            ll inicio = min({pos1, pos2, pos3});
            ll tam = i - inicio + 1;

            minn = min(minn, tam);
            
        }

    } 

    cout << minn << el;
    

}

void passaNao() {
    cin>>n;
    
    vl pos1; vl pos2; vl pos3;
    
    f (i, 0, n) {
        cin>>x;
        if (x == 1) pos1.pb(i);
        if (x == 2) pos2.pb(i);
        if (x == 3) pos3.pb(i);    
    } 
    ll minn = INF;
    f (i, 0, pos1.size()) {
        f (j, 0, pos2.size()) {
            f (k, 0, pos3.size()) {
                if (pos1[i] < pos2[j] && pos2[j] < pos3[k]) {
                    minn = min(minn, pos3[k] - pos1[i] + 1);
                }
            }
        }
    }

    cout << minn << el;
    
}
signed main() {
    ___
    //cin>>t;
    //while(t--)
    solve();
    
    return 0;
}