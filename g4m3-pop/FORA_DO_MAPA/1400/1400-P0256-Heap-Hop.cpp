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
// 05/06/2026 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7; // 998244353;
ll INF = 1e18 + 7;
const int MAXN = 1e5 + 5;
// matriz vll mat(n, vl(m, 0))

ll n, t, k, x, y, z;
string s, a, b, c;

/* (mind) 
    quantos saltos (swaps) cada elemento dá na arvore durante as operacoes
    43min 53sec
    
*/
void solve() {
    cin>>n;
    vl v;
    while(n--){
        cin>>s;
        ll ans = 0;
        
        if (s == "HEAP") {
            cin>>x;
            v.pb(x);

            ll ansAtual = 0;
            ll idxAtual = v.size()-1;

            while (idxAtual > 0 && v[idxAtual] > v[(idxAtual - 1) / 2]) {
                // valor atual é maior do que o pai
                swap(v[idxAtual], v[(idxAtual - 1) / 2]);
                ansAtual++;
                idxAtual = (idxAtual - 1) / 2; // sobe para o idx do pai    
            }
            cout << ansAtual << el;

        }
        else if (s == "HOP"){
            ll ansAtual = 0;
            ll idxAtual = 0;
            v[0] = v.back();
            v.ppb();

            while (2*idxAtual + 1 < v.size()) {
                ll esq = 2 * idxAtual + 1;
                ll dir = 2 * idxAtual + 2;

                ll maiorFilho = esq;
                
                if (dir < v.size() && v[dir] > v[esq]) {
                    maiorFilho = dir;
                }

                if (v[idxAtual] > v[maiorFilho]) {
                    break;
                }

                swap(v[idxAtual], v[maiorFilho]);
                ansAtual++;
                idxAtual = maiorFilho;
                
            }
            cout << ansAtual << el;
        }
    }

    cout << "---" << el;
    cout << v.size() << el;
    
}
signed main() {
    ___
    // cin>>t;
    // while(t--)
    solve();
    
    return 0;
}