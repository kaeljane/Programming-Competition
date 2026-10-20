#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define ll long long
using namespace std;

/*
    
*/

void solve() {
    ll n, qt = 0; long double x, soma = 0; cin>>n;
    
    for (ll i = 0; i < n; i++) {
        cin>>x;
        if (x != -1) {
            soma += x;
            qt++;
        }
    }

    cout << fixed << setprecision(9) << soma / qt << '\n';

    

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    // ll t; cin>>t; 
    // while (t--)
    solve();

    return 0;
}