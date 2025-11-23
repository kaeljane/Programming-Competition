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
// 22/11/2025 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7;
ll INF = 1e18 + 7;

ll n, t, k, x, y, z;
string s, a, b, c;

/* (mind) 
        se o numero tiver dois numeros primos dentro dele!
        
*/


map<ll, int> fatores(ll n) {
        map<ll, int> fatores;

        while (n % 2 == 0) {
                fatores[2]++;
                n /= 2;
        }

        for (ll i=3; i*i <= n; i+=2) {
                while (n % i == 0) {
                        fatores[i]++;
                        n /= i;
                }
        }

        if (n > 2) {
                fatores[n]++;
        }
        return fatores;
}

void solve() {
        cin>>n;
        ll qt = 0;
        if (n == 1) {
                cout << 0 << el;
                return;
        }
        for (ll i=1; i <= n; i++) {
                map<ll, int> mapa = fatores(i);
                if (sz(mapa) == 2) qt++;
        }

        cout << qt << el;
}
signed main() {
        ___
        t=1;
        //cin>>t;
        //while(t--)
        solve();
        
        return 0;
}