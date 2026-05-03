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
// 01/05/2026 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7; // 998244353;
ll INF = 1e18 + 7;
const int MAXN = 1e5 + 5;
// matriz vll mat(n, vl(m, 0))

ll n, t, k, x, y, z, m, posi;
string s, a, b, c;
char oper;
/* (mind) 
    
    
*/
void solve() {
    cin >> n >> m;
    // map<ll, string> mapa;
    vector<string> nomes(n+1);
    set<ll> vivos;

    for (ll i = 1; i <= n; i++) {
        cin>>nomes[i];
        vivos.insert(i);
    }
    
    for(int i = 0; i < m ; i++){
        ll posi; cin>>oper;

        if(oper == '!'){ // retirar do map
            // nomes[posi-1] =  " ";  // tem uma posicao ali
            cin>>posi;
            vivos.erase(posi);
        }
        else if (oper == '?') { // ver se tem no map
            cin>>posi;
            auto it = vivos.lower_bound(posi);
            
            if (it != vivos.end()) {
                cout << nomes[*it] << el;
            }
            else {
                cout << "Ninguem" << el;
            }
        }
    }
    
}
signed main() {
    ___
    // cin>>t;
    // while(t--)
    solve();
    
    return 0;
}