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
// 14/12/2025 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7;
ll INF = 1e18 + 7;
const int MAXN = 1e6 + 5;
// matriz vll mat(n, vl(m, 0))
// 

ll n, t, k, x, y, z;
string s, a, b, c;

/* (mind) 
    
    
*/
void solve() {
    cin>>n>>k>>x;
    vl vAns;
    ll soma=0, qt=0;
    if (x == 1) {
        if (k == 1) cout << "NO" << el;
        else if (k == 2) {
            if (n % 2 == 0) {
                cout << "YES" << el;
                cout << n/2 << el;
                while (soma != n) {
                    cout << 2 << " ";
                    soma += 2;
                    if (soma == n) break;
                }
                cout << el;

            }
            else cout << "NO" << el;
        }
        else { // k>3 mas x == 1
            if (n == 1) {
                cout << "NO" << el;
                return;
            }
            cout << "YES" << el;
            if (n % 2 == 0) {
                cout << n/2 << el;
                while (soma < n) {
                    cout << 2 << " "; 
                    soma += 2;
                    if (soma == n) break;
                }
                cout << el;
            }
            // n impar
            else {
                vAns.push_back(3);
                soma+=3;
                while (soma < n) {
                    vAns.push_back(2);
                    soma += 2;
                    if (soma == n) break;
                }
                cout << vAns.size() << el;
                for (auto x : vAns) cout << x << " ";
                cout << el;
            }
        }
    }
    // trivial // alterando ppara nao dar memory limit
    else {
        cout << "YES" << el;
        cout << n << el;
        // imprima um monte de 1
        while (soma != n) {
            cout << 1 << " ";
            soma++;
        }
        cout << el;
    }


}
signed main() {
    ___
    cin>>t;
    while(t--)
    solve();
    
    return 0;
}