#include <bits/stdc++.h>
#define ll unsigned long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n, a, b, soma = 0;
    cin>>n>>a>>b;
    
    // soma = n*(n+1)/2;
    
    
    for (ll i = 1 ; i <= n ; i++){
        // soma dos digitos está entre a e b
        string i_str = to_string(i);
        ll soma_str = 0;

        // vai percorrer o numero e somar a quantidade de digitos
        for(int j = 0 ; j < i_str.size() ; j++) {
            // cada caractere
            soma_str += (i_str[j] - '0'); // tranforma em int o caracter
            // cout<< "i = " <<i<< " soma_str = "<< soma_str <<endl;
        }
        // cout<< "i = " <<i<< " soma_str = "<< soma_str <<endl;

        if (a <= soma_str && soma_str <= b) {
            soma += i;
        }

    }
    cout<<soma<<endl;

    return 0;
}