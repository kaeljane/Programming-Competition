#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define ll long long
using namespace std;

/*
    

*/

void solve() {
    ll n; cin>>n;

    vector<ll> v(n); 
    for (ll i = 0; i < n; i++) {
        cin>>v[i];
    }

    sort(all(v));

    if (v[n-10] <= 700) {
        cout << "FINALMENTE" << '\n';
    }
    else {
        cout << "FALHOU" <<'\n';
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