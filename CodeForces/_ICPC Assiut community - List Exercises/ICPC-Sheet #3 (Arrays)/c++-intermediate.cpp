#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vs vector<string>
#define vl vector<long long>
#define vll vector<vector<long long>>
#define ___ ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;

int main() {
    ___;
    ll n; cin>>n;
    ll numero = 1;
    vl lista_inversa;
    for (ll i = 1; i <= n ; i++) {
        for (ll j = 0; j < i; j++) {
            if (i % 2 == 0 || i == 1){
                cout<<numero<<" ";
                numero++;
            }
            else {
                lista_inversa.push_back(numero);
                numero++;
            }
        }
        copy(lista_inversa.rbegin(), lista_inversa.rend(), ostream_iterator<ll> (cout, " "));
        lista_inversa = {};
        cout<<'\n';
    }


    return 0;
}