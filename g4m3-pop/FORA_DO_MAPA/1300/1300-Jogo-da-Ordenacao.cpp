#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define vi vector<int>
#define vc vector<char>
#define vs vector<string>
#define vl vector<long long>
#define vd vector<long double>
#define vll vector<vector<long long>>
#define all(v) v.begin(), v.end()
#define imp(v, t) copy(v.begin(), v.end(), ostream_iterator<t> (cout, " "))
#define ___ ios::sync_with_stdio(false); cin.tie(nullptr);
// 27/10/2025 by Kaeljane
using namespace std;

ll n, t, k, x, y, z;
string s, a, b, c;

/* (mind) 
        Complexidade = O(n)
        
*/
ll factorial(int k) {
        if (k < 0) return 0; 
        if (k == 0 || k == 1) return 1;
        ll res = 1;
        for (ll i = 2; i <= k; ++i) {
            res *= i;
        }
    return res;
}
void solve() {
        cin >> n;

        map<ll, ll> cont_alt;
    
        for (ll i = 0; i < n; ++i) {
                ll id, alt;
                cin >> id >> alt;
                cont_alt[alt]++; 
        }

    ll t_perm = 1;

        for (auto& par : cont_alt) {
                int cont = par.second; 
        
                t_perm *= factorial(cont);
        }

        cout << t_perm << endl;
        
}
signed main() {
        ___
        // t=1;
        // cin>>t;
        // while(t--)
        solve();
        
        return 0;
}
