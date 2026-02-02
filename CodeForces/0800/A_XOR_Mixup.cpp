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
// 02/02/2026 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7;
ll INF = 1e18 + 7;
const int MAXN = 1e5 + 5;
// matriz vll mat(n, vl(m, 0))

ll n, t, k, x, y, z;
string s, a, b, c;

/* (mind) 
    Relembrando o xor
    precisa ter dois elementos diferentes para dar true
          ^
    0 0 | 0
    1 1 | 0
    0 1 | 1
    1 0 | 1
    
    xor de all elements??

    ele vai fazer o Xor numero a numero menos no numero escolhido! 
    

    4 3 2 5

    v[i] = 4


*/
void solve() {
    cin>>n;
    vl v(n); for (ll i = 0; i < n; i++) cin>>v[i];
    
    f(i, 0, n) { // vai escolher o numero
        ll sum = 0;
        bool firstVez = false;
        f(j, 0, n) { // vai fazer o xor de todos os numeros
            if (i != j) {
                if (!firstVez) {
                    firstVez = true;
                    sum = v[j];
                }
                else {
                    sum ^= v[j];
                }
            }
        }
        if (sum == v[i]) {
            cout << v[i] << el;
            return;
        }
    }
    
}
signed main() {
    ___
    cin>>t;
    while(t--)
    solve();
    
    return 0;
}