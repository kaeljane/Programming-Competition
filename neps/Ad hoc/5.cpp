#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define ll long long
using namespace std;
/*
    -1 horário:     vai diminuindo com o tempo
     1 antihorario: vai aumentando com o tempo
*/

void solve() {
    ll h, p, f, d, calc; cin>>h>>p>>f>>d;
    
    while (f != h && f != p) {
        f = (f + d + 16) % 16;
    }

    if (f == h) cout << "S" << '\n';
    else cout << "N" << '\n';
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    // ll t; cin>>t; 
    // while (t--)
    solve();

    return 0;
}
