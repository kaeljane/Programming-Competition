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
// 06/06/2026 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7; // 998244353;
ll INF = 1e18 + 7;
const int MAXN = 1e5 + 5;
// matriz vll mat(n, vl(m, 0))

ll n, t, k, x, y, z;
string s, a, b, c;

/* (mind) 
    dividir as apples em dois grupos
    para que a diferença minima seja a menor possível!
    isso nao é prefixSum? 
    
*/
void solve() {
    cin>>n;
    ll somaa = 0;
    vl v(n); f (i, 0, n) {cin>>v[i]; somaa += v[i];}

    sort(all(v));
    ll ansMinimo = INF;
    
    ll totalCombinacoes = (1 << n);

    f (mask, 0, totalCombinacoes) {
        ll somaA = 0;
        f (i, 0, n) {
            if (mask & (1 << i)) {
                somaA +=  v[i];
            }
        }

        ll somaB = somaa - somaA;

        ansMinimo = min(ansMinimo, abs(somaA - somaB));
        

    }


    cout << ansMinimo << el;

    
}
signed main() {
    ___
    //cin>>t;
    //while(t--)
    solve();
    
    return 0;
}