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
// 26/05/2026 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7; // 998244353;
ll INF = 1e18 + 7;
const int MAXN = 1e5 + 5;
// matriz vll mat(n, vl(m, 0))

ll n, t, k, x, y, z;
string s, a, b, c;

/* (mind) 
    usado template de "Coin Change Problem"

    
*/

struct Moeda {
    string nome;
    ll valor;

    bool operator<(const Moeda& outra) const {
        return nome < outra.nome;
    }
};

void solve() {
    cin>>n;

    vector<Moeda> moedas = {
        {"ALAN", 1000}, {"CLOE", 480}, {"ELON", 80}, {"GABY", 20}, 
        {"IRMA", 5}, {"BETO", 600}, {"DUDA", 240}, {"FANY", 60}, 
        {"HUGO", 8}, {"JOSE", 1}
    };
    
    sort(all(moedas));

    vector<ll> dp(n+1, INF);
    dp[0] = 0;

    f (i, 1, n+1) {
        for (auto m : moedas) {
            if (i >= m.valor && dp[i - m.valor] != INF) {
                dp[i] = min(dp[i], dp[i - m.valor] + 1);
            }
        }
    }

    ll atual = n;
    string ans = "";

    while (atual > 0) {
        for (auto m : moedas) {
            if (atual >= m.valor && dp[atual] == dp[atual - m.valor] + 1){
               ans += m.nome;
               atual -= m.valor; 

               break;
            }
        }
    }

    cout << ans << el;

    
}
signed main() {
    ___
    // cin>>t;
    // while(t--)
    solve();
    
    return 0;
}