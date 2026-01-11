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
// 10/01/2026 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7;
ll INF = 1e18 + 7;
const int MAXN = 1e6 + 5;
// matriz vll mat(n, vl(m, 0))

ll n, t, k, x, y, z;
string s, a, b, c;

/* (mind) 
    se bem que tem como calcular usando resto...

    9 % 12 = [9] -> AM  -> se continuou o mesmo numero
    0 % 12 = [12] -> PM -> se ocorreu alguma mudança no numero

    
*/
void solve() {
    cin>>n;
    vector<string> v(n);

    // input's
    for (ll i = 0; i < n; i++) {
        cin>>v[i];
    }

    for (ll i = 0; i < n; i++) {
        string str = v[i];
        string intStr = "";
        // conc dos primeiros numeros
        intStr += str[0];
        intStr += str[1];

        ll num = stoll(intStr);
        
        if (str[0] == '0' && str[1] == '0') {
            cout << 12 << str[2] << str[3] << str[4] << " AM" << el;
        }
        else if (str[0] == '1' && str[1] == '2') {
            cout << 12 << str[2] << str[3] << str[4] << " PM" << el;
        }
        else if (num % 12 == num) { // AM
            cout << str << " AM" << el;
        }
        else { // PM | precisa colocar um zero no inicio se for menor que 10
            ll calc = num % 12;
            string ans = "";
            if (calc < 10) {
                ans += "0";
                ans += to_string(calc);
                cout << ans << str[2] << str[3] << str[4] << " PM" << el;
            }
            else {
                ans += to_string(calc);
                cout << ans << str[2] << str[3] << str[4] << " PM" << el;
            }

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