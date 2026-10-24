#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define ll long long
using namespace std;

/*
    MILE
    30seg -> 10centavos 
    59seg -> 20centavos TETO


    3seg -> 1centavo

    JUICE
    60segundos -> 15centavos 20/5 -> 4segundos -> 1centavo
    59segundos -> 15centavos




*/
ll cases = 1;

void solve() {
    ll n, x; cin>>n;
    ll gastoMile = 0;
    ll gastoJuice = 0;
    ll custoInicialMile = 10;
    ll custoInicialJuice = 15;
    for (ll i = 0; i < n; i++) {
        cin>>x; 

        gastoMile += (x / 30 + 1) * 10;
        gastoJuice += (x / 60 + 1) * 15;
    
    }
    if (gastoMile == gastoJuice) {
        cout << "Case " << cases << ": " << "Mile Juice " << gastoMile << '\n';
    }
    else if (gastoMile < gastoJuice) {
        cout << "Case " << cases << ": " << "Mile " << gastoMile << '\n';
    }
    else {
        cout << "Case " << cases << ": " << "Juice " << gastoJuice << '\n';
    }
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