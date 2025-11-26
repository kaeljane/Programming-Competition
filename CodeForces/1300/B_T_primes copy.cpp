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
// 25/11/2025 by Kaeljane
using namespace std;
 
ll MOD = 1e9 + 7;
ll INF = 1e18 + 7;
const int MAXN = 1e6 + 5;
 
ll n, t, k, x, y, z;
string s, a, b, c;
 
/* (mind) 
        1 + sqrt(n) + n
        precisa ter tres divisores que sao esses de cima!!
*/
 
bool isPrime(ll n) {
    if (n <= 1) return false; // 0 e 1 não são primos
    if (n == 2) return true;  // 2 é o único par primo
    if (n % 2 == 0) return false; 
 
    for (ll i = 3; i * i <= n; i += 2) {
        if (n % i == 0) return false;
    }
    
    return true;
}
 
 
void solve() {
        cin>>n;
        while (n--) {
                cin>>x;
                
                ll resto = sqrt((double)(x));
                if (resto*resto == x && x != 1 && isPrime(resto)) {
                        cout << "YES" << el;
                }
                else {
                        cout << "NO" << el;
                }
 
        }
        
}
signed main() {
        ___
        t=1;
        solve();
        
        return 0;
}