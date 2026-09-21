#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define ll long long
using namespace std;
/*
    numero de pontos do participante

*/

void solve() {
    ll n, x, ansAtual = 1, ans = 1, ant; cin>>n;
    vector<ll> v(n+1);

    for (ll i = 0; i < n; i++) {
        cin>>v[i];
    }
    
    v[n] = -1;

    ant = v[0];
    for (ll i = 1; i < n+1; i++) {
        if (v[i] == v[i-1]) {
            ansAtual++;
        } 
        else {
            ansAtual = 1;
        }
        ans = max(ansAtual, ans);
    }

    cout << ans << '\n';

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    // ll t; cin>>t; 
    // while (t--)
    solve();

    return 0;
}
