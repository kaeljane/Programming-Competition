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
// 17/08/2026 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7; // 998244353;
ll INF = 1e18 + 7;
const int MAXN = 1e5 + 5;
// matriz vll mat(n, vl(m, 0))

ll n, t, k, x, y, z, ans, m;
string s, a, b, c;

/* (mind) 
    Time: 5min 10sec -> 25min 16sec
    Padrão: força bruta
    
    Summarize(resumir/descrever):
        - Montou N pilhas com x de ouro em cada uma.
        - A pessoa da vez pode escolher M pilhas e a qt de
        ouro que pode levar para casa é o xor (bit a bit)
        das qt de ouro de cada uma das pilhas escolhidas.
        
    Deduce(deduzir/derivar/testar):
        
        
    Solve(resolver/programar):
    Change(TLE, WA):
        
*/
vl v;
void backtrack(ll idx, ll acc, ll qt) {
    if (idx == n) {
        if (qt == m) {
            ans = max(ans, acc);
        }
        return;
    }

    backtrack(idx+1, acc, qt); // nao pegar
    backtrack(idx+1, acc ^ v[idx], qt+1); // pegar o num

}

void solve() {
    cin>>n>>m;
    v.assign(n, 0);
    f (i, 0, n) cin>>v[i];
    backtrack(0, 0, 0);
    
    cout << ans << el;
    
}
signed main() {
    ___
    //cin>>t;
    //while(t--)
    solve();
    
    return 0;
}