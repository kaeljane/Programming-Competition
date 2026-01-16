// ------------ Discipline is remembering who you said you wanted to be^^ ------------
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
#define ___ ios::sync_with_stdio(false); cin.tie(nullptr);
// 16/01/2026 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7;
ll INF = 1e18 + 7;
const int MAXN = 1e6 + 5;
// matriz vll mat(n, vl(m, 0))

ll n, t, k, x, y, z;
string s, a, b, c;

/* (mind) 
    valor | bom em
    1 -> programaçào
    2 -> matemática
    3 -> Educação Física
    
*/
void solve() {
    cin>>n;
    vl cnt(4, 0);
    vl ind1;
    vl ind2;
    vl ind3;
    cnt[0] = INT_MAX;

    for (ll i = 0; i < n; i++) {
        cin>>x; 
        cnt[x]++;
        if (x == 1) {
            ind1.pb(i);
        }
        else if(x == 2) {
            ind2.pb(i);
        }
        else {
            ind3.pb(i);
        }
    }
    ll menor = min_el(cnt);
    cout << menor << el;

    for (ll i = 0; i < menor; i++) {
        cout << ind1[i]+1<< " " << ind2[i]+1<< " " << ind3[i]+1 << el;
    }
    
}
signed main() {
    ___
    // cin>>t;
    // while(t--)
    solve();
    
    return 0;
}