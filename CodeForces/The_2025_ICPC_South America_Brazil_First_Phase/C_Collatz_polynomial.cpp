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
// 05/08/2026 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7; // 998244353;
ll INF = 1e18 + 7;
const int MAXN = 1e5 + 5;
// matriz vll mat(n, vl(m, 0))

ll n, t, k, x, y, z, ans;
string s, a, b, c;

/* (mind) 
    Time: ///
    Padrão: 

    grau de polinomio

    Ai = 1 -> o termo Xi está presente no polinomio
    Ai = 0 -> o termo Xi não está presente no polinomio

    
*/

void solve() {
    string ss;
    cin>>n;

    f (i, 0, n+1) {
        cin>>a;
        ss += a;
    }

    x = stoll(ss, nullptr, 2);
    ans = 0;
    while (x != 1) {
        if (x&1) {
            x = (x << 1) ^ x ^ 1;
        }
        else {
            x = (x >> 1);
        }
        ans++;
    }

    cout << ans << el;


}

void solve() {
    cin>>n;
    
    vector<ll> v(n+1);
    
    rf (i, n, 0) {
        cin>>v[i];
    }

    ll ops = 0;

    while (v.size() > 1) {
        ops++;
        if (v[0] == 0) {
            v.erase(v.begin());
        }
        else {
            vector <ll> temp(v.size() + 1, 0);

            f (i, 0, v.size()) {
                temp[i+1] = v[i];
            }

            f (i, 0, v.size()) {
                temp[i] = (temp[i] + v[i]) % 2;
            }

            temp[0] = (temp[0] + 1) % 2;

            v = temp;

            while (v.size() > 1 && v.back() == 0) {
                v.pop_back();
            }
        }
    }

    cout << ops << el;

}
signed main() {
    ___
    //cin>>t;
    //while(t--)
    solve();
    
    return 0;
}