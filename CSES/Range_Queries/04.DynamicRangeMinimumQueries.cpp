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
// 12/12/2025 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7;
ll INF = 1e18 + 7;
const int MAXN = 1e6 + 5;
// matriz vll mat(n, vl(m, 0))
// 

ll n, t, k, x, q, y, z;
string s, a, b, c;

/* (mind) 
    
    
*/
// By: João Pedro
// IFPB
 
#include <bits/stdc++.h>
using namespace std;
 
const int MAX = 2e5+5; // 2*10^5 = 200000 ///////
 
int ns[MAX];
 
/// SEGTREE
/// Para utilizar:
///   seg.build(limite)
///   seg.update(pos, novo_valor)
///   seg.query(l, r)
///   lembrando que é 0-indexado, então tomar cuidado com pos, l e r
 
#define e(u) (u*2)     // Filho da Esquerda
#define d(u) (e(u)+1)  // Filho da Direita
#define out (l > r || l > b || r < a)
#define in (a <= l && r <= b)
 
/// exemplos de declaração de estrutura (quando só tem uma variável):
// Node a = {10};
// Node b = {11};
// Node c = a + b;

// Aqui definimos o que a arvore faz
struct Node {
    long long v = INF; // atenção com o valor padrão, para que ele seja nulo de verdade /////
 
    Node operator+(const Node b) { // operação de mesclagem
        return {min(v, b.v)}; //////
    }
};
// Quer mudar para achar o Mínimo? Troque por return { min(v, b.v) };.
 
struct SEG {
    Node seg[MAX*4];
    int lim;
 
    void build(int u, int l, int r) {
        if(l == r) { // nó folha
                seg[u].v = 5; // ou qualquer outro valor inicial de preferencia /////
            } 
            else {
                const int m = (l+r)/2;
                build(e(u), l, m), build(d(u), m+1, r);
                seg[u] = seg[e(u)] + seg[d(u)];
            }
    }
 
    void build(int lim_) {
        lim = lim_; /////
        build(1, 0,lim);
    }
 
    void update(int u, int l, int r, int a, int b) {
        if(l == r) { // nó folha
            seg[u].v = b; // alterando valor na posição a para b   //////
            return;
        }
        const int m = (l+r)/2;
        if(a <= m) update(e(u), l, m, a, b);
        else update(d(u), m+1, r, a, b);
        seg[u] = seg[e(u)] + seg[d(u)];
    }
    
    void update(int pos, int newv) { // seg.update(10, 3)
        update(1, 0,lim, pos, newv);
    }
 
    Node query(int u, int l, int r, int a, int b) {
        if(out) return Node();
        if(in) return seg[u];
        const int m = (l+r)/2;
        return query(e(u), l, m, a, b) + query(d(u), m+1, r, a, b);
    }
 
    Node query(int l, int r) { // seg.query(1, 10)
        return query(1, 0,lim, l, r);
    }
} seg;
/// SEGTREE
 
 
// int main() {
//     cin.tie(nullptr)->sync_with_stdio(0);
    
//     seg.build(5); // 5 5 5 5 5
//     seg.update(0, 4); // 4 5 5 5 5
//     seg.update(1, 8); // 4 8 5 5 5
//     cout<<seg.query(0, 4).v<<'\n'; // 27
// }
 

signed main() {
    ___
    cin>>n>>q;
    seg.build(n);
    vl v(n); for (ll i=0; i<n; i++) cin>>v[i];

    //att
    for (ll i=0; i<n; i++) {
        seg.update(i, v[i]);
    }

    // calc
    for (ll i=0; i<q; i++) {
        cin>>z>>x>>y;

        if (z == 1) {
            seg.update(x-1, y);
        }
        else if (z == 2) {
            cout << seg.query(x-1, y-1).v << el;
        }
    }

    return 0;
}