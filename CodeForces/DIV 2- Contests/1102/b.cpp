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
// 07/06/2026 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7; // 998244353;
ll INF = 1e18 + 7;
const int MAXN = 1e5 + 5;
// matriz vll mat(n, vl(m, 0))

ll n, t, k, x, y, z;
string s, a, b, c;

/* (mind) 
    
    
*/

vector<ll> p;
// vector<ll> preComputacaoMult12;

// vl preComputer(ll limite) {
//     vl preComp;
//     for (ll i = 1; i <= limite; i += 12) {
//         preComp.pb(i);
//     }

//     return preComp;
// }

vl geraPalindromos(ll limite) {
    vl pal;
    pal.pb(0); 

    for (ll i = 1; i <= 1000000; i++) {
        
        ll pImpar = i;
        ll tempImpar = i / 10; 
        while (tempImpar > 0) {
            pImpar = pImpar * 10 + (tempImpar % 10);
            tempImpar /= 10;
        }
        if (pImpar <= limite) {
            pal.pb(pImpar);
        }

        ll pPar = i;
        ll tempPar = i; 
        while (tempPar > 0) {
            pPar = pPar * 10 + (tempPar % 10);
            tempPar /= 10;
        }
        if (pPar <= limite) {
            pal.pb(pPar);
        }
    }

    sort(all(pal));
    
    return pal;
}

void solve() {
    cin>>n;

    ll tamPali = p.size();

    f (i, 0, tamPali) {
        if (p[i] > n) break; /// pohhaa
        if ((n - p[i]) % 12 == 0) {cout << p[i] << " " << (n - p[i]) << el; return;}

    }
    cout << -1 << el;
    
}
signed main() {
    ___
    p = geraPalindromos(1000000000000LL);
    cin>>t;
    while(t--)
    solve();
    
    return 0;
}