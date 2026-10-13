#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define ll long long
using namespace std;

/*
    presta atencao no tipo de dado ;-;
*/

void solve() {
    ll n; cin>>n;
    vector<string> inicial(n); for (ll i = 0; i < n; i++) cin>>inicial[i];
    
    vector<string> dec = inicial; sort(dec.rbegin(), dec.rend());
    vector<string> cres = inicial; sort(cres.begin(), cres.end());
    
    if (inicial == dec) cout << "DECREASING" << '\n';
    else if (inicial == cres) cout << "INCREASING" << '\n';
    else {
        cout << "NEITHER" << '\n';
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