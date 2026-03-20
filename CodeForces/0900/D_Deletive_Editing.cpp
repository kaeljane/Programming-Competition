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
// 19/03/2026 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7;
ll INF = 1e18 + 7;
const int MAXN = 1e5 + 5;
// matriz vll mat(n, vl(m, 0))

ll n, t, k, x, y, z;
string s, a, b, c;

/* (mind) 
    
    
*/
void solve() {
    cin>>a>>b;

    string newA = "";

    ll tamA = a.size();
    ll tamB = b.size();

    for (ll i = 0; i < tamA; i++) {
        if (b.find(a[i]) != string::npos){
            newA += a[i]; // vai ficar so as letras que sao comum na segunda string
        }
    }

    if (newA == b) {
        cout << "YES" << el;
        return;
    }
    if (newA.size() <= tamB) {
        cout << "NO" << el;
        return;
    } 

    ll l = 0;
    while(newA.size() >= tamB) {
        if (newA == b) {
            cout << "YES" << el;
            return;
        }
        if (l > tamB || newA.size() < tamB) {
            cout << "NO" << el;
            return;
        }
        if (newA[l] != b[l]) {
            // preciso remover esse elemento da newA.
            size_t pos = newA.find(newA[l]);
            newA.erase(pos, 1); // nao esta apagando a primeira ocorrencia!! Esta apagando sempre na posicao que ele quer!! o problema nao deixa
        }
        else {
            l++;

        }

    }

    cout << "NO" << el;
    
}
signed main() {
    ___
    cin>>t;
    while(t--)
    solve();
    
    return 0;
}