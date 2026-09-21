#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define ll long long
using namespace std;
/*
    numero de pontos do participante

*/

void solve() {
    ll x, n;
    vector<ll> v;
    for (ll i = 0; i < 10; i++) {
        cin>>x;
        v.push_back(x);
    }
    cin>>n;
    ll qt = 0;
    for (ll i = 0; i < 10; i++) {
        if (v[i] == n) {
            qt++;
        }
    }

    if (qt == 0) {
        cout << "Mia x" << '\n';
    }
    else {
        cout << qt << '\n';
    
        for (ll i = 0; i < 10; i++) {
            if (v[i] == n) {
                cout << i << " ";
            }
        }
        cout << '\n';

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
