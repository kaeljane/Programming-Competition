#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define ll long long
using namespace std;

/*
    
*/

void TLE() {
    ll a, c, x, ans = 0;
    
    while (cin>>a) {
        if (a == 0) break;
        ans = 0;
        
        cin>>c;
        vector<ll> h(c, a);
        vector<ll> fH(c);

        for (ll i = 0; i < c; i++) cin>>fH[i];
        bool quebrouJa = 0;

        for (ll i = 0; i < a*c; i++) {
            if (h == fH) break;
            if (i % c == 0) quebrouJa = 0;
            if ( fH[i % c] < h[i % c] ) {
                if (!quebrouJa) {
                    ans++;
                    quebrouJa = 1;
                }
                h[i % c]--;
            }
            else {
                quebrouJa = 0;
            }
        }
        cout << ans << '\n';

    }


}

// void solve() {
//     ll a, c, x, ans = 0;
    
//     while (cin>>a) {
//         if (a == 0) break;
//         ans = 0;
        
//         cin>>c;
//         vector<ll> fH(c);

//         for (ll i = 0; i < c; i++) cin>>fH[i];
//         ll menor = fH[0];
//         ll pico = 0;

//         for (ll i = 1; i < c; i++) {
//             menor = min(menor, fH[i]);
//             pico = max(pico, fH[i-1]);
            
//             if (fH[i-1] > fH[i]) {
//                 ans += (pico - menor);
//                 menor = INT_MAX;
//             }
//         }

//         if (menor < fH.back()) {
//             ans += a - menor;
//         }

//         cout << ans << '\n';
        

//     }

// }

void solve() {
    ll a, c, x, ans = 0;
    
    while (cin>>a && a != 0) {
        cin>>c;

        ll totalAtivacoes = 0;
        ll altAnterior = a;

        for (ll i = 0; i < c; i++) {
            ll alturaAtual; cin>>alturaAtual;

            if (altAnterior > alturaAtual) {
                totalAtivacoes += (altAnterior - alturaAtual);
            }

            altAnterior = alturaAtual;

        }

        cout << totalAtivacoes << '\n';

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