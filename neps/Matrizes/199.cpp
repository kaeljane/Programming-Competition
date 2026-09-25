#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define ll long long
using namespace std;
/*


*/

void solve() {
    
    ll soma = 0, x;

    for (ll i = 0; i < 3; i++) {
        soma = 0;
        for (ll i = 0; i < 3; i++) {
            cin>>x;
            soma += x;
        }
        cout << "Linha " << i << ": " << soma << '\n';
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
