#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define ll long long
using namespace std;

/*
    pulos altos.
    pulos baixos.


    
*/
ll cases = 1;
void solve() {
    ll n, ant, x; cin>>n>>ant;

    ll altos = 0, baixos = 0;
    for (ll i = 1; i < n; i++) {
        cin>>x;
        if (ant < x) altos++;
        if (ant > x) baixos++;
        ant = x;
    }

    cout << "Case " << cases << ": " << altos << " " << baixos << '\n';
    cases++;


}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll t; cin>>t; 
    while (t--)
    solve();

    return 0;
}