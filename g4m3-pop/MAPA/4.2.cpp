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
// 22/07/2026 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7; // 998244353;
ll INF = 1e18 + 7;
const int MAXN = 1e5 + 5;
// matriz vll mat(n, vl(m, 0))

ll n, t, k, x, y, z, ans;
string s, a, b, c;

/* (mind) 
    Time: 24min 51sec
    Padrão: matriz

    nao pode haver mais de 100 globins para conseguir entrar
    na celula
    
    esse ultimo for-for foi desnecessario mas enfim...
    
*/
void solve() {
    cin>>n;

    vector<vector<ll>> v(n, vector<ll> (n, 0));
    vector<vector<string>> vStr(n, vector<string> (n, ""));
    
    bool b1 = 0;

    f (i,0,n) {
        f (j,0,n) {
            cin>>v[i][j];

            if (v[i][j] == 10) b1=1;
        }
    }

    f (i,0,n) {
        f (j,0,n) {
            if (v[i][j] <= 100 && v[i][j] + 10 > 100) {
                vStr[i][j] = "o";
            }
            else if (v[i][j] > 100) {
                vStr[i][j] = "-";
            }
            else {
                vStr[i][j] = "+";
            }

            cout << vStr[i][j];
            
        }
        cout << el;
    }

    ll qtO = 0, qtMenos = 0, qtMais = 0;

    f (i,0,n) {
        f (j,0,n) {
            if (vStr[i][j] == "o") {
                qtO++;
            }
            else if (vStr[i][j] == "-") {
                qtMenos++;
            }
            else {
                qtMais++;
            }
        }
    }
    cout << el;

    cout << "+: " << qtMais << el;
    cout << "o: " << qtO << el;
    cout << "-: " << qtMenos << el;


}
signed main() {
    ___
    //cin>>t;
    //while(t--)
    solve();
    
    return 0;
}