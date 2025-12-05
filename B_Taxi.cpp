#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define ii pair<ll, int>
#define iii par<ll, ii>
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
#define rsort(v) sort(rall(v))
#define sor(v) sort(all(v))
#define soma(v) accumulate(all(v), 0LL)
#define max_el(v) *max_element(all(v))
#define min_el(v) *min_element(all(v))
#define sz(v) (v).size()
#define vazio(v) (v).empty()
#define lb lower_bound
#define ub upper_bound
#define fi first
#define pb push_back
#define pf push_front
#define ppb pop_back
#define ppf pop_front
#define sec second
#define umap unordered_map
#define uset unordered_set
#define imp(v, t, e) copy(v.begin(), v.end(), ostream_iterator<t> (cout, e))
#define ___ ios::sync_with_stdio(false); cin.tie(nullptr);
// 17/11/2025 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7;
ll MAXI = 1e9 + 7;
ll INF = 1e18 + 7;

ll n, t, k, x, y, z;
string s, a, b, c;

/* (mind) 
        INCLEMENTAR UMA BUSCA BINÁRIA!!        
        
*/


void solve() {
        cin>>n;
        vector<ii> pares;
        
        vl v;
        while (cin>>x) v.pb(x);
        rsort(v);
        for (ll &x : v) { // nao precisa disso a busca binária já vai percorrer
                if (x == 4) { 
                        pares.pb({4, 2});
                        x = 5;
                }
                else if (x < 4) break;
        }

        for (ll &x : v) {
                if (x == 3) {
                        pares.pb({3, 1});
                        x = 5;
                }
                else if (x < 3) break;
        }

        // imp(v, ll, " "); cout << '\n';
        // cout << '\n';
        
        // for (auto p : pares) {
        //         cout << p.fi << " " << p.sec << '\n';  
        // }
        bool existe = true;
        for (ll i=sz(v)-1; i >= 0; i--){
                // continuar depois!!!!!
                // auto it = lower_bound(all(v), 1);

                // if (it != v.end()) {
                //         ll ind = it - v.begin(); // Pega o índice numérico
                //         ll valor = *it;  // Pega o valor apontado
                        
                //         // Checa se achamos EXATAMENTE o alvo ou um número maior
                //         if (valor == 1) bool existe = true;
                //         else existe = false;
                // }

                if (v[i] == 1){
                        for (auto &p : pares) {
                                if (p.fi == 3 && p.sec == 1) {
                                        p.fi++;
                                        p.sec++;
                                        v[i] = 5;
                                        break;
                                }
                        }
                }
                else if (v[i] > 1 && v[i] != 5) break;
        }
        // for (auto p : pares) {
        //         cout << p.fi << " " << p.sec << '\n';  
        // }

        // imp(v, ll, " "); cout << '\n';
        // cout << '\n';

        bool add=false;
        for (ll i=sz(v)-1; i >= 0; i--) {
                if (v[i] == 2) {
                        add = false;
                        for (auto &p : pares) {
                                if (p.fi == 2 && p.sec == 1) {
                                        p.fi+=2;
                                        p.sec++;
                                        v[i] = 5;
                                        add=true;
                                        break;
                                }
                        }
                        if (add==false) {
                                pares.pb({2, 1});
                                v[i] = 5;
                        }

                }
                if ((v[i] == 3 || v[i] == 4) && v[i] != 5 ) break;
        }
        // imp(v, ll, " "); cout << '\n';



        add = false;
        if (count(all(v), 1) > 0) {
                for (ll i=sz(v)-1; i >= 0; i--) {
                        if (v[i] == 1) {
                                add = false;
                                for (auto &p : pares) {
                                        if (p.fi == 1 && p.sec == 1 || p.fi == 2 && p.sec == 2 || p.fi == 3 && p.sec == 2|| p.fi == 3 && p.sec == 3 || p.fi == 2 && p.sec == 1 || p.fi == 3 && p.sec == 1) {
                                                p.fi+=1;
                                                p.sec++;
                                                v[i] = 5;
                                                add=true;
                                                break;
                                        }
                                }
                                if (add==false) {
                                        pares.pb({1, 1});
                                        v[i] = 5;
                                }
                        }
                if ((v[i] == 3 || v[i] == 3 || v[i] == 4) && v[i] != 5 ) break;
                }
        }
        // for (auto p : pares) {
        //         cout << p.fi << " " << p.sec << '\n';  
        // }

        cout << sz(pares) << '\n';



}
signed main() {
        ___
        t=1;
        while(t--)solve();
        
        return 0;
}