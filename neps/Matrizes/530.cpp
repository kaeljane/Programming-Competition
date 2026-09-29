#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define ll long long
using namespace std;

/*
    

*/

void solve() {
    ll n, xi, xf, yi, yf;
    cin>>n;
    vector<vector<ll>> mar(105, vector<ll>(105));
    ll areaTotal = 0;
    while(n--) {
        cin>>xi>>xf>>yi>>yf;
        
        for (ll i = xi; i < xf; i++) {
            for (ll j = yi; j < yf; j++) {
                if (!mar[i][j]) {
                    mar[i][j] = 1;
                    areaTotal++;
                }
            }
        }
    }

    cout << areaTotal << '\n';

    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    // ll t; cin>>t; 
    // while (t--)
    solve();

  
    return 0;
}
