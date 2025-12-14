#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define ii pair<ll, int>
#define vi vector<int>
#define vc vector<char>
#define vb vector<bool>
#define vs vector<string>
#define vl vector<long long>
#define vd vector<long double>
#define vll vector<vector<long long>>
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define rev(v) reverse(all(v))
#define soma(v) accumulate(all(v), 0LL)
#define max_el(v) *max_element(all(v))
#define min_el(v) *min_element(all(v))
#define sz(v) ((int)(v).size())
#define vazio(v) (v).empty()
#define fi first
#define pb push_back
#define pf push_front
#define ppb pop_back
#define ppf pop_front
#define sec second
#define el '\n'
#define umap unordered_map
#define uset unordered_set
#define imp(v, t, e) copy(v.begin(), v.end(), ostream_iterator<t> (cout, e))
#define ___ ios::sync_with_stdio(false); cin.tie(nullptr);
// 14/12/2025 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7;
ll INF = 1e18 + 7;
const int MAXN = 1e6 + 5;
// matriz vll mat(n, vl(m, 0))
// vl v(n); for (ll i=0; i<n; i++) cin>>v[i];

ll n, t, k, x, y, z, a, b, c;
string s;

/* (mind) 
    A - Ana
    B - Katie
    C - Qualquer pessoa

    First -> ana win
    Second-> Katie win

    Revezaram para apertar os botões

    Em algum momento alguma das meninas nao poderá pressionar o botão

    Perde a menina que não conseguirá aprtar um botão!
    
    10 10

    impar -> A | Par -> B
    1b 3b 
    2b 4b 
    5b 6b 7b 8b 9b 10b 11b 12b   B ganha

    1b
    2b
    3b   A ganha

*/
void solve() {
    cin>>a>>b>>c;
    if (a+c > b+c) cout << "First" << el;
    else if (a+c < b+c) cout << "Second" << el;
    else if (a+c == b+c) {
        if ((a+b+c) % 2 == 0) cout << "Second" << el;
        else cout << "First" << el;
    }
}
signed main() {
    ___
    cin>>t;
    while(t--)
    solve();
    
    return 0;
}