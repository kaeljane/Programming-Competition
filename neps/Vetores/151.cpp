#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define ll long long
using namespace std;
/*
    numero de pontos do participante

*/

void solve() {
    vector<ll> v(3);
    cin>>v[0]>>v[1]>>v[2];

    sort(all(v));

    for (auto &x : v) {
        cout << x << '\n';
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
