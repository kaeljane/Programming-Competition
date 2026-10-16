#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define ll long long
using namespace std;

/*


*/

// 0 morre
// 1 baixo
// 2 alto

void solve() {
    ll atual = 2;

    string s; cin>>s;
    ll invulneravel = 0;
    for (ll i = 0; i < s.size(); i++) {
        if (invulneravel) {
            invulneravel--;
            if (invulneravel == 0) {
                continue;
            }
        }
        if (s[i] == 'E') {
            invulneravel = 5;
        }
        else if (s[i] == 'C') {
            if (atual == 1) atual++;
        }
        else if ((s[i] == 'D') && (!invulneravel)) {
            if (atual == 2) atual--;
            else if (atual == 1) {
                atual--;
                cout << "MORTO" << '\n'; ////
                return;
            }
        }
    }

    if (atual == 1) {
        cout << "BAIXO" << '\n';
    }
    else if (atual == 2) {
        cout << "ALTO" << '\n';
    }


}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    // ll t; cin>>t; 
    // while (t--)
    solve();

  
    return 0;
}