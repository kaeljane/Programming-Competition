#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define ll long long
using namespace std;
/*

*/
int main() {
    ll n; string s; cin>>n;
    vector<ll> v(10, 0);
    
    for (ll i = 0; i < n; i++) {
        cin>>s;
        for (ll j = 0; j < s.size(); j++) {
            v[s[j] - '0']++;
        }
    }

    for (ll i = 0; i < 10; i++) {
        cout << i << " - " << v[i] << '\n';
    }


    return 0;
}