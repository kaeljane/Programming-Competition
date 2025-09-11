#include <bits/stdc++.h>
#define ll unsigned long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // k s
    ll k, s, qt = 0;
    cin>>k>>s;


    for (ll x = 0 ; x <= k ; x++) {
        for (ll y = 0 ; y <= k; y++) {
            ll z = s - x - y;
            if (0 <= z && z <= k) {
                qt++;
            }
        }
    }
    cout<< qt << endl;
 

    return 0;
}