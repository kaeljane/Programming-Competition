// ------------ Discipline is remembering who you said you wanted to be^^ ------------
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
// 13/01/2026 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7;
ll INF = 1e18 + 7;
const int MAXN = 1e6 + 5;
// matriz vll mat(n, vl(m, 0))

ll n, t, k, x, y, z;
string s, a, b, c;

/* (mind) 
    mex(A) + mex(B) -> maximizar isso
    obs:
        verfificar se possui zero
        colocar o maximo de numeros que estão em sequencia dentro de um conj
        se não tiver o zero dentro do vector inicial então a resposta sempre sera zero
        se tiver 2 zeros
        se tiver 1 zero

    Teste  1
        0 : 2 x
        1 : 2 x
        2 : 1
        5 : 1 | (2 + (5-2) == 3)

    Teste 3
        0 : 2 x
        1 : 1 
        2 : 1 
        {0, 1, 2} 
            esse possui zero 
            está em sequencia sem buracos, [colocar o maximo de numeros que estão em sequencia dentro de um conj] 
            entao o mex(A) = 3
        {0} 
            o mex(b) = 1
            
*/
void solve() {
    cin>>n;
    vector<int> cnt(105, 0);
    
    // input's
    vl v(n); 
    for (ll i = 0; i < n; i++) {
        cin>>x;
        cnt[x]++;
    }
    bool achouZero = false;
    bool achouOne = false;
    ll mexA = 0;
    ll mexB = 0;
    for (ll i = 0; i < 105; i++) {
        if (!achouZero && cnt[i] == 0) {
            mexA = i;
            achouZero = true;
        }
        if (!achouOne && cnt[i] <= 1) {
            mexB = i;
            achouOne = true;
        }

        if (achouOne && achouZero) {
            cout << mexA + mexB << el;
            return;
        }

    }
    cout << mexA + mexB << el;

    
}
signed main() {
    ___
    cin>>t;
    while(t--)
    solve();
    
    return 0;
}