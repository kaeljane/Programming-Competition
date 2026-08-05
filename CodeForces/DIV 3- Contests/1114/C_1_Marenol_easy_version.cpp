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
// 03/08/2026 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7; // 998244353;
ll INF = 1e18 + 7;
const int MAXN = 1e5 + 5;
// matriz vll mat(n, vl(m, 0))

ll n, t, k, x, y, z, ans;
string s, a, b, c;

/* (mind) 
    Time: //////
    Padrão: 

    string a pode se transformar em b ?

    001 -> 100
    011 -> 110

    precisa ter a mesma qt de zeros e uns

    vai passar nao ctz
    

    
*/
void solve() {
    cin>>n>>a>>b;

    if (a == b) {cout << "YES" << el; return;}
    
    ll i1=0, p1=0, i2=0, p2=0;

    f (i, 0, n) {
        if (i&1) {
            if (a[i] == '1') {
                i1++;
            }
            if (b[i] == '1') {
                i2++;
            }
        }
        else {
            if (a[i] == '1') {
                p1++;
            }
            if (b[i] == '1') {
                p2++;
            }
        }
    }

    if (i1 == i2 && p1 == p2) {
        cout << "YES" << el;
    }
    else {
        cout << "NO" << el;
    }
    
    
    
    
}
signed main() {
    ___
    cin>>t;
    while(t--)
    solve();
    
    return 0;
}