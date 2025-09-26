#include <bits/stdc++.h>
#define ll unsigned long long
using namespace std;

int main(){
    ll n, numero; cin>>n;
    vector<int> lista = {};
    bool palindrome = true;
    for (ll i = 0; i < n; i++){
        cin>>numero;
        lista.push_back(numero);
    }
    ll ultimo_ind_lista = lista.size()-1;
    for (ll k = 0; k < n; k++) {
        if (lista[k] == lista[ultimo_ind_lista]){
        }
        else {palindrome=false; break;}
        ultimo_ind_lista--;
    }
    if (palindrome == false) {
        cout<<"NO"<<'\n';
    }
    else {
        cout<<"YES"<<"\n";
    }

}