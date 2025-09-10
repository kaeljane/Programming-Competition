#include <bits/stdc++.h>
#define ll unsigned long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // k s
    ll k, s, qt = 0;
    cin>>k>>s;
    // determine a quantidade de valores diferentes de x e 
    if (k<s){
        for (ll x = 0 ; x <= k ; x++) {
            for (ll y = 0 ; y <= k ; y++){
                for (ll z = 0 ; z <= k ; z++) {
                    if ( (x + y + z) == s) {qt++;}
                }
            }
        }
    }
    else {
        for (ll x = 0 ; x <= s ; x++) {
            for (ll y = 0 ; y <= s ; y++){
                for (ll z = 0 ; z <= s ; z++) {
                    if ( (x + y + z) == s) {qt++;}
                }
            }
        }
    }
    cout<< qt << endl;
    
    
    
    
    
    
    
    // for (int i = 0 ; i <= 2*k ; i++){
    //     for (int j = 0 ; j <= k ; i++) {
    //         if ((i + j) == s) {
    //             qt++;
    //         }
    //     }
    // }













    return 0;
}