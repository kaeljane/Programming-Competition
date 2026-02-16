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
#define ___ ios::sync_with_stdio(false); cin.tie(nullptr);
// 15/02/2026 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7;
ll INF = 1e18 + 7;
const int MAXN = 1e5 + 5;
// matriz vll mat(n, vl(m, 0))

ll n, t, k, x, y, z;
string s, a, b, c;

/* (mind) 
    Jogar em um map e contar as palavras

    para formar um um precisa ter
    {
    o = 1
    n = 1
    e = 1

    }

    depois retirar a quantidade usada.

    
    para formar o zero

    {
    z = 1
    e = 1
    r = 1
    o = 1
    
    (precisa usar bem mais)
    }
*/
void solve() {
    cin>>n;
    cin>>s;
    
    map<char, ll> mapa;

    for (ll i = 0; i < n; i++) {
        mapa[s[i]]++;
    }

    vector<ll> ans;
    while (true) {
        if (mapa['o'] && mapa['n'] && mapa['e']) {
            ans.pb(1);
            mapa['o']--; mapa['n']--; mapa['e']--;
        }
        else if (mapa['z'] && mapa['e'] && mapa['r'] && mapa['o']) {
            ans.pb(0);
            mapa['z']--; mapa['e']--; mapa['r']--; mapa['o']--;
        }
        else {
            break;
        }
    }

    for (auto &x : ans) cout << x << " ";
    cout << el;
    
}
signed main() {
    ___
    // cin>>t;
    // while(t--)
    solve();
    
    return 0;
}