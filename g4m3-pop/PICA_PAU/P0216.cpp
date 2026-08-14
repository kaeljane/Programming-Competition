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
// 13/08/2026 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7; // 998244353;
ll INF = 1e18 + 7;
const int MAXN = 1e5 + 5;
// matriz vll mat(n, vl(m, 0))

ll n, t, k, x, y, z, ans;
string s, a, b, c;

/* (mind) 
    Time: 18min 10sec
    Padrão: janela deslizante, two pointers
    
    Summarize(resumir/descrever):
        YES NO
        - Dinâmica inteligente para definir os sortudos
        - v. sorteou um numero positivo para cada um deles
        - patrocinadora escolhera um numero x aleatoriamente

        - existe algum segmento contíguo de participantes
        cuja soma é exatemente a x?
        
    Deduce(deduzir/derivar/testar):
        algo do tipo janela deslizante, quando a soma atual
        passar do valor x então diminua o primeiro numero
        que foi somado
        
    Solve(resolver/programar):
    Change(TLE, WA):
        
*/
void solve() {
    cin>>n>>x;
    ans = 0;
    vl v(n); f (i, 0, n) cin>>v[i];

    ll l = 0, r = 0, somaAtual = 0;
    while (r < n && l < n) {
        
        if (somaAtual + v[r] > x) {
            // andar com o L
            somaAtual += v[r];
            while (somaAtual > x && l <= r) {
                somaAtual -= v[l];
                l++;
            }
            r++;
            
        }
        else if (somaAtual + v[r] <= x) {
            somaAtual += v[r];
            r++;
        }

        if (somaAtual == x) {cout << "YES" << el; return;}
    }

    cout << "NO" << el;
    
}
signed main() {
    ___
    //cin>>t;
    //while(t--)
    solve();
    
    return 0;
}