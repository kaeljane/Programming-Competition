#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define ll long long
using namespace std;

/*
    
*/

void solve() {
    ll n, k; cin>>n;

    for (ll i = 0; i < n; i++) {
        cin>>k;
        vector<ll> jog(k, 0);
        ll soma = 0;
        for (ll j = 0; j < k; j++) {
            cin>>jog[j];
            soma += jog[j];
        }

        auto it = max_element(all(jog));
        
        ll idx = it - jog.begin();
        ll valorMaior = *it;

        ll empatados = count(all(jog), valorMaior); 

        if (empatados > 1) {
            cout << "no winner" << '\n';   
        }
        else if (*it > soma/2) {
            cout << "majority winner " << idx + 1 << '\n';
        }
        else {
            cout << "minority winner " << idx + 1 << '\n';
        }

        
    }

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    // ll t; cin>>t; 
    // while (t--)
    solve();

    return 0;
}