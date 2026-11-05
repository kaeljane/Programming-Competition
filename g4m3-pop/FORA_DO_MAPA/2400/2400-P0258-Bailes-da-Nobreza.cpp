// ------------ Repetition repetition repetition repetition repetition repet... ------------
#include <bits/stdc++.h>
#define ll long long
#define ii pair<ll, ll>
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
// 02/08/2026 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7; // 998244353;
ll INF = 1e18 + 7;
const int MAXN = 1e5 + 5;
// matriz vll mat(n, vl(m, 0))

ll n, t, k, x, y, z, ans, a, b, c, q, l, r;
string s;

/* (mind) 
    Time: 1h 50min 44sec + 1h 21min 5sec
    Padrão: 

    o grande baile
    encomendou vestidos de gala
    a ordem nao importa
    trazer uma grande variedade de vestidos
    inspecao

    cores distintas

    prefix sum? nao ;()
    segtree? muito provavelmente
    bit? talvez (nao sei usar direito)

    tentar fazer milagre com a segtree

    nao posso usar meu template de RMQ
    tem que usar o RSQ o que eu nunca usei 

    bombaaaaaa

    somar a quantidade de vestidos validos

    muito dificil, mas nao impossivel (talvez impossivel numa compt por hora)



    
*/

int ns[MAXN];
#define e(u) (u*2)
#define d(u) (e(u)+1)
#define out (l > r || l > b || r < a)
#define in (a <= l && r <= b)

struct Node {
    ll v = 0;

    Node operator+(const Node b) {
        return {v + b.v};
    }
};

struct SEG {
    Node seg[MAXN*4];
    ll lim;

    void build(ll u, ll l, ll r) {
        if (l == r) {
            seg[u].v = 0;
        }
        else {
            const ll m = (l+r)/2;
            build(e(u), l, m), build(d(u), m+1, r);
            seg[u] = seg[e(u)] + seg[d(u)];
        }
    }
    void build(ll lim_) {
        lim = lim_; ////
        build(1, 0, lim); // 0-based
    }

    void update(ll u, ll l, ll r, ll a, ll b) {
        if (l == r) { // no folha
            seg[u].v = b;
            return;
        }
        const ll m = (l+r)/2;
        if (a <= m) update(e(u), l, m, a, b);
        else update(d(u), m+1, r, a, b);
        seg[u] = seg[e(u)] + seg[d(u)];

    }

    void update (ll pos, ll newv) {
        update(1, 0, lim, pos, newv);
    }

    Node query (ll u, ll l, ll r, ll a, ll b) {
        if (out) return Node();
        if (in) return seg[u];
        const ll m = (l+r)/2;
        return query(e(u), l, m, a, b) + query(d(u), m+1, r, a, b);
    }
    Node query(ll l, ll r) {
        return query(1, 0, lim, l, r);
    }
} seg;

struct Consulta { // sorte de ter estudado isso essa semana 
    ll l;
    ll r;
    ll id;
};
bool cmp (Consulta a, Consulta b) { //
    return a.r < b.r;
}

void solve() {
    cin>>n; // comodos
    map<vector<ll>, ll> mp;

    vl comodos(n + 1); //1-based !!!!!!!!!!!!!!
    ll cntID = 1;

    f (i, 0, n) {
        vl temp(3);
        cin>>temp[0]>>temp[1]>>temp[2];
        sort(all(temp));

        if (mp.find(temp) == mp.end()) {
            mp[temp] = cntID;
            cntID++; 
        }
        comodos[i+1] = mp[temp];
        
    }
    
    // agora lascou
    cin>>q;
    vector<Consulta> consultas(q);
    f (i, 0, q) {
        cin>>consultas[i].l>>consultas[i].r;
        consultas[i].id = i;
    }
    sort(all(consultas), cmp);

    seg.build(n);

    vector<ll> ultPosicao(cntID + 1, 0);
    // em qual comodo vi o vestido pela ultima vez?

    // vector<ll> anss(q);
    vector<pair
    <pair<ll, ll>, 
    ll>> anss(q);

    ll pont = 0;

    f (i, 1, n+1) { // comodos
        ll idVestido = comodos[i];

        if (ultPosicao[idVestido] != 0) { // ou seja, ja foi encontrado antes
            seg.update(ultPosicao[idVestido], 0);
        }

        seg.update(i, 1); // o vestido está nessa posicao agora!!

        ultPosicao[idVestido] = i;
        while (pont < q && consultas[pont].r == i) {
            ll limEsq = consultas[pont].l;
            ll limDir = consultas[pont].r;
            ll idOrig = consultas[pont].id;

            Node resultado = seg.query(limEsq, limDir);

            anss[idOrig].sec = resultado.v;
            anss[idOrig].fi.fi = limEsq;
            anss[idOrig].fi.sec = limDir;

            pont++;

        }
    }

    f (i, 0, q) {
        cout << anss[i].fi.fi << " " << anss[i].fi.sec << " " << anss[i].sec << el;
    }

    
}
signed main() {
    ___
    //cin>>t;
    //while(t--)
    solve();
    
    return 0;
}