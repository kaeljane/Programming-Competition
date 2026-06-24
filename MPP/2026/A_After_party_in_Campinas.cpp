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
// 23/06/2026 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7; // 998244353;
ll INF = 1e18 + 7;
const int MAXN = 1e5 + 5;
// matriz vll mat(n, vl(m, 0))

ll n, t, k, x, y, z, ans, q, orc, rej;
string s, a, b, c;

/* (mind) 
    tentando aprender busca binaria na respostaadkjasdjakldaldjaksd
    
    
*/
void solve() {
    cin>>n>>q;

    vector<ll> custo(n);
    vector<ll> estilo(n);
    
    f (i,0,n) {
        cin>>custo[i]>>estilo[i];
    }

    // pre-computacao
    vector<ll> proxDiff(n, -1);

    for (ll i = n-2; i >= 0; i--) {
        // penultimo -> 0
        if (estilo[i] != estilo[i+1]) {
            proxDiff[i] = i + 1;
        }
        else {
            proxDiff[i] = proxDiff[i+1]; // herda o do vizinho
        }
    }

    f (i,0,q) {
        cin>>orc>>rej;

        ll l = 0, r = n-1, idx = -1;
        while (l <= r) {
            ll mid = l + (r - l) / 2;
            
            if (custo[mid] <= orc) {
                idx = mid;
                r = mid - 1;
            }
            else {
                l = mid + 1;
            }

        }

        if (idx == -1) {
            cout << -1 << el;
            continue;
        }

        if (estilo[idx] != rej) {
            cout << idx + 1 << el;
        }
        else {
            ll p = proxDiff[idx];
            if (p != -1) {
                cout << p + 1 << el;
            }
            else {
                cout << -1 << el;
            }
        }


    } 


    
    
}
signed main() {
    ___
    //cin>>t;
    //while(t--)
    solve();
    
    return 0;
}