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
#define imp(v, t) copy(v.begin(), v.end(), ostream_iterator<t> (cout, ))
#define ___ ios::sync_with_stdio(false); cin.tie(nullptr);
// 12/11/2025 by Kaeljane
using namespace std;

ll n, t, k, x, y, z;
ll d;
string s, a, b, c;

/* (mind) 
 
*/
void solve() {
    cin >> x >> y >> z >> d; 
    
    if (z % x != 0) {
        cout << "-1\n";
        return;
    }

    ll target = z / x;
    
    set<ll> valid_n;

    for (ll k = 1; k * k <= target; k++) {
        if (target % k == 0) {
            
            ll n1 = k * x;
            if (n1 % y != 0 && d % n1 != 0) {
                valid_n.insert(n1);
            }

            ll n2 = (target / k) * x;
            if (n2 % y != 0 && d % n2 != 0) {
                valid_n.insert(n2);
            }
        }
    }

    if (valid_n.empty()) {
        cout << "-1\n";
    } 
    else {
        cout << *valid_n.begin() << '\n';
    }
}

signed main() {
    ___
    solve(); 
    
    return 0;
}