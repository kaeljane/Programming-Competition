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
// 28/06/2026 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7; // 998244353;
ll INF = 1e18 + 7;
const int MAXN = 1e5 + 5;
// matriz vll mat(n, vl(m, 0))

ll n, t, k, x, y, z, ans;
string s, a, b, c;

/* (mind) 
    Time: 4min 29sec -> 5min 30sec
    Padrão: string
    
*/
void solve() {
    cin>>a>>b;

    ll qtA=0, qtB=0;

    f (i,0,a.size()) {
        if (a[i] == 'a') {
            qtA += 1;
        }
        if (a[i] == 'e') {
            qtA += 2;
        }
        if (a[i] == 'i') {
            qtA += 3;
        }
        if (a[i] == 'o') {
            qtA += 4;
        }
        if (a[i] == 'u') {
            qtA += 5;
        }
        if (a[i] == 'y') {
            qtA += 100;
        }
    }
    f (i,0,b.size()) {
        if (b[i] == 'a') {
            qtB += 1;
        }
        if (b[i] == 'e') {
            qtB += 2;
        }
        if (b[i] == 'i') {
            qtB += 3;
        }
        if (b[i] == 'o') {
            qtB += 4;
        }
        if (b[i] == 'u') {
            qtB += 5;
        }
        if (b[i] == 'y') {
            qtB += 100;
        }
    }
    
    if (qtA == qtB) {
        cout << "naruto" << el;
    }
    else if (qtA > qtB) {
        cout << a << el;
    }
    else {
        cout << b << el;
    }
    
}
signed main() {
    ___
    cin>>t;
    while(t--)
    solve();
    
    return 0;
}