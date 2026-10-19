#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define ll long long
using namespace std;

/*
    b numero de bancos
    n 

*/

void solve() {
    ll b, n, x, d, c, v;
    bool f = 0;
    while(cin>>b>>n) {
        if (b == 0 && n == 0) break;
        f = 0;
        vector<ll> reserva;
        for (ll i = 0; i < b; i++) {
            cin>>x;
            reserva.push_back(x);
        }
        for (ll i = 0; i < n; i++) {
            cin>>d>>c>>v; d--; c--;
            reserva[d] -= v;
            reserva[c] += v;
        }

        for (ll i = 0; i < b; i++) {
            if (reserva[i] < 0) f = 1;
        }
        if (f) cout << "N" << '\n';
        else cout << "S" << '\n';


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