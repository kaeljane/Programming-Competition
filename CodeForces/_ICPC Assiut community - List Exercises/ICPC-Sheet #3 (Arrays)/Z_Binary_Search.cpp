#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vs vector<string>
#define vl vector<long long>
#define vll vector<vector<long long>>
# define ___ ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;

int main() {
    ___;
    ll n, t, numero, numeru; cin>>n>>t;
    string resposta = "not found";
    vl lista;

    for (ll i = 0; i < n ; i++) {
        cin>>numero;
        lista.push_back(numero);
    }

    sort(lista.begin(), lista.end());

    for (ll num = 0; num < t ; num++) {
        cin>>numeru;
        ll a = 0, b = lista.size()-1;
        while (a <= b) {
            ll k = (a+b)/2;
            if (lista[k] == numeru) {
                resposta = "found";
                break;
            }
            if (lista[k] > numeru) b = k-1;
            else a = k+1;
        }
        cout<<resposta<<'\n';
        resposta = "not found";
    }

    return 0;
}