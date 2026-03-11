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
// 10/03/2026 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7;
ll INF = 1e18 + 7;
const int MAXN = 1e5 + 5;
// matriz vll mat(n, vl(m, 0))

ll n, t, k, x, y, z;
string s, a, b, c;

/* (mind) 
    treinando stack
    
    Criar: stack<char> p;
    Adicionar no topo: p.push('A');
    Ver quem está no topo: p.top();
    Remover do topo: p.pop(); 
        (Cuidado: o pop só remove, ele não retorna o valor lido).

    logica:
        Se dois sinais iguais estiverem lado a lado, eles se anulam (somem). 
*/
void solve() {
    cin>>s;
    stack<char> p;

    for (ll i = 0; i < s.size(); i++) {
        if (p.size() == 0) {
            // simplesmente adicionar
            p.push(s[i]);
        }
        else {
            // analisar
            if (p.top() == s[i]) {
                p.pop();
            }
            else {
                p.push(s[i]);
            }
        }
    }

    if (!p.size()) {
        cout << "Yes" << el;
    }
    else {
        cout << "No" << el;
    }
    

    
    
}
signed main() {
    ___
    // cin>>t;
    // while(t--)
    solve();
    
    return 0;
}