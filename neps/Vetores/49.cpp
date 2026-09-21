#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define ll long long
using namespace std;
/*
    numero de pontos do participante

*/

void solve() {
    ll n; cin>>n;
    vector<ll> v(n);
    
    for (ll i = 0; i < n; i++) {
        cin>>v[i];
    }

    for (ll i = 0; i < n; i++) {
        if (v[i] == 0) {
            cout << 0 << " ";
        }
        else {
            ll esq = 100000;
            ll dir = 100000;

            for (ll j = i; j >= 0; j--) {
                if (v[j] == 0) {
                    esq = i - j;
                    break;
                }
            }

            for (ll j = i; j < n; j++) {
                if (v[j] == 0) {
                    dir = j - i;
                    break;
                }
            }
            if (esq > dir ) {
                if (dir >= 9) {
                    cout << 9 << " ";
                }
                else {
                    cout << dir << " ";
                }
            }
            else {
                if (esq >= 9) {
                    cout << 9 << " ";
                }
                else {
                    cout << esq << " ";
                }
            }


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
