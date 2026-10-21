#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define ll long long
using namespace std;

/*

*/

void solve() {
    ll n, b, h, w, x, onePersonHotel;
    while (cin>>n>>b>>h>>w) {
        ll custoMinimo = INT_MAX;
        for (ll i = 0; i < h; i++) {
            cin>>onePersonHotel;
            for (ll j = 0; j < w; j++) {
                // numero de camas disponivel no hotel
                cin>>x;

                if ( x >= n && onePersonHotel*n <= b) {
                    custoMinimo = min(custoMinimo, onePersonHotel*n);
                }

            }
        }

        if (custoMinimo == INT_MAX) {
            cout << "stay home" << '\n';
        }
        else {
            cout << custoMinimo << '\n';
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