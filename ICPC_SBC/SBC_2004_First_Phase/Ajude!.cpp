#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define ll long long
using namespace std;

/*
    
*/

void solve() {
    ll n;
    char c; ll valor; string resultado;

    while(cin>>n) {
        if (n == 0) break;
        vector<char> acertos;
        vector<char> errados;
        ll qt = 0;
        for (ll i = 0; i < n; i++) {
            cin>>c>>valor>> resultado;
            if (resultado == "correct") {
                acertos.push_back(c);
                qt += valor;
            }
            else {
                errados.push_back(c);
            }
        }

        for (ll i = 0; i < acertos.size(); i++) {
            for (ll j = 0; j < errados.size(); j++) {
                if (acertos[i] == errados[j]) qt += 20;
            }
        }

        cout << acertos.size() << " " << qt << '\n';
        
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