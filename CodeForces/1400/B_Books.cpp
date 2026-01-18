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
// 18/01/2026 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7;
ll INF = 1e18 + 7;
const int MAXN = 1e6 + 5;
// matriz vll mat(n, vl(m, 0))

ll n, t, k, x, y, z;
string s, a, b, c;

/* (mind) 
    n -> books pegos na biblioteca
    t -> tempo livre p/ ler os livros
    Ai... estimativa de tempo para ler cada livro

    MAIOR SEQUENCIA CONSECUTIVA!!!!!
    Prefix sum / Two Pointers
*/

void solve() {
    cin>>n>>k;
    vl v(n);
    for (auto &i : v) cin>>i;

    // janela deslizante + TwoPointers
    ll l = 0, r = 0;
    ll sum = 0;
    ll ans = 0;

    // [l, r]
    while (r < n) {
        sum += v[r]; 

        // remov da esq se estourar
        while (sum > k) {
            sum -= v[l];
            l++;
        }

        ans = max(ans, r - l + 1); // bas 1 com o +1
        r++;

    }

    cout << ans << el;

    /*
    Visualizacao:
        l = 0 r = 0
            sum = {2}
            sum = 2
            ans = max(0, 0-0 + 1) -> ans = 1
            r = 1
        l = 0 r = 1
            sum = {2, 3}
            sum = 5
            ans = max(1, 1-0 + 1) -> ans = 2
            r = 2
        l = 0 r = 2
            sum = {2, 3, 4}
            sum = 9
            ans = max(2, 2 - 0 + 1) -> ans = 3
            r = 3
        l = 0 r = 3
            sum = {2, 3, 4, 2}
            sum = 11 xxxx nao pod
            sum = {3, 4, 2}
            sum = 9 
            l = 1
            ans = max(3, 3-1 +1) -> ans = 3
            r = 4
        l = 1 r = 4
            sum = {3, 4, 2, 1}
            sum = 10
            ans = max(3, 4 - 1 + 1) -> ans = 4
            r = 5
        l = 1 r = 5
            sum = {3, 4, 2, 1, 1}
            sum = 11 xxxxx
            sum = {4, 2, 1, 1}
            sum = 8
            l = 2 
            ans = max(4, 5-2 + 1) -> ans = 4
            r = 6 ACABOUUUU 


    */
    
}
signed main() {
    ___
    // cin>>t;
    // while(t--)
    solve();
    
    return 0;
}