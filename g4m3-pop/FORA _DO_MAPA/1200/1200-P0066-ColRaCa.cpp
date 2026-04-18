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
// 18/04/2026 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7; // 998244353;
ll INF = 1e18 + 7;
const int MAXN = 1e5 + 5;
// matriz vll mat(n, vl(m, 0))

ll n, t, k, x, y, z;
string s, a, b, c;

/* (mind) 
    45m 22s
    
*/
void solve() {
    cin>>n;
    vector<vector<string>> v(n, vector<string>(n, "0"));

    for (ll i = 0; i < n; i++) {
        for (ll j = 0; j < n; j++) {
            cin>>v[i][j];
        }
    }
    ll mid = n /2;
    ll etapas = 1;
    // 0 direita, 1 cima, 2 esquerda, 3 baixo
    ll posicao = 0;
    ll i = mid;
    ll j = mid;

    ll impressos = 1;
    cout << v[mid][mid] << " ";
    ll total = n*n;
    while (impressos < total) {
        if (posicao == 0) { 
            ll vezes = etapas;
            while (vezes--){ // 
                if (j+1 < n) {j++; cout << v[i][j] << " "; impressos++;}
                else break;
            }
            posicao = (posicao + 1) % 4;   
        }
        else if (posicao == 1) {
            ll vezes = etapas;
            while (vezes--){ // 
                if (i - 1 >= 0) {i--; cout << v[i][j] << " "; impressos++;}
                else break;
            }
            posicao = (posicao + 1) % 4;   
            etapas++;
        }
        else if (posicao == 2) {
            ll vezes = etapas;
            while (vezes--){ // 
                if (j-1 >= 0) {j--; cout << v[i][j] << " "; impressos++;}
                else break;
            }
            posicao = (posicao + 1) % 4;   
        }
        else if (posicao == 3) {
            ll vezes = etapas;
            while (vezes--){ // 
                if (i+1 < n) {i++; cout << v[i][j] << " "; impressos++;}
                else break;
            }
            posicao = (posicao + 1) % 4;
            etapas++;
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