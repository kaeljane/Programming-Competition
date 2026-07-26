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
// 26/07/2026 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7; // 998244353;
ll INF = 1e18 + 7;
const int MAXN = 1e5 + 5;
// matriz vll mat(n, vl(m, 0))

ll n, t, k, x, y, z, ans;
string s, a, b, c;

/* (mind) 
    Time: 30min
    Padrão: ... visualizacao? abstrair hard

    a -> b

    delay a nao pode ser maior que
    delay b

    a menor
    a tambem nao pode ser tao menor que o b
    
    delay(b) - delay(a) <= 2

    dificil dificil

*/
void solve() {
    ll delayA;
    ans=0;
    cin>>delayA;
    
    vl v(n-1); f (i,0,n-1) cin>>v[i]; sort(all(v));
    
    f (i, 0, n-1) {
        if ((delayA - v[i]) >= 0 && (delayA - v[i]) <= 2) ans++;
        else {
            ll atual = v[i];

            f (j, i+1, n-1) {
                if (v[j] <= delayA) {
                    if (v[j] - atual >= 0 && v[j] - atual <= 2) {
                        atual = v[j];
                        if ( delayA - atual >= 0 && delayA - atual <= 2 ) {
                            ans++;
                            break;
                        }
                    }
                    else {
                        break;
                    }
                }
            }

        }
    }

    cout << ans << el;
    


    
}

signed main() {
    ___
    cin>>t>>n;
    while(t--)
    solve();
    
    return 0;
}