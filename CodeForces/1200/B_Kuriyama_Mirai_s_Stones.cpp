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
// 23/11/2025 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7;
ll INF = 1e18 + 7;

ll n, t, k, x, y, z, m, l, r, tipo;
string s, a, b, c;

/* (mind) 
        matou monstros e ganhou muitas pedras ( n -> total)
        DUAS PERGUNTAS
        - 
        - 


        Imprimir a resposta da pergunta...
*/

vector<ll> buildPrefix(const vector<ll>& v) {
        ll n = v.size();
        vector<ll> p(n + 1, 0);
        for (ll i=0; i < n; i++) {
                p[i + 1] = p[i] + v[i];
        }
        return p;
}

ll querySum(const vector<ll>& p, int l, int r) {
        if (l > r) return 0;
        return p[r + 1] - p[l];
}

void solve() {
        cin>>n;
        vl custoPedras(n);
        for (ll i = 0; i < n; i++) {
                cin>>custoPedras[i];
        }
        
        vl u = custoPedras; 
        sort(all(u));
        
        vl prefCustos = buildPrefix(custoPedras);
        vl prefU = buildPrefix(u);

        cin>>m; 

        while (m--) {
                cin>>tipo>>l>>r;
                if (tipo == 1){
                        cout << querySum(prefCustos, l-1, r-1) << el;
                }
                else {
                        cout << querySum(prefU, l-1, r-1) << el;
                }

        }

        
}
signed main() {
        ___
        t=1;
        //cin>>t;
        //while(t--)
        solve();
        
        return 0;
}