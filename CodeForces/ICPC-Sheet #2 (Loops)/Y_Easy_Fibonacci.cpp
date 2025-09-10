#include <bits/stdc++.h>
#define ll unsigned long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // variaveis e tals
    ll t, anterior = 0, numero = 0;
    vector<int> fibonnaci = {0 , 1};
    //input
    cin>>t;
    //calculo
    if (t == 1){cout<<fibonnaci[0]<<endl;}
    else if (t == 2){cout<<fibonnaci[0] << " " << fibonnaci[1]<<endl;}
    else {
        // colocar os numeros de fibonnaci dentro do vector!
        for (int i = 2 ; i < t ; i++){
            // anterior + o de agora == próximo número.
            ll numero = fibonnaci[i-2] + fibonnaci[i-1];
            fibonnaci.push_back(numero);
        }
        for (int& numero : fibonnaci) {
            cout<< numero << " ";
        }
    }
    return 0;
}