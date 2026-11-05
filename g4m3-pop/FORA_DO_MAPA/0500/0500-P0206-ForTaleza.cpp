#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vs vector<string>
#define vl vector<long long>
#define vll vector<vector<long long>>
#define ___ ios::sync_with_stdio(false); cin.tie(nullptr);
// 27/09/2025 by Kaeljane
using namespace std;

int main() {
    ___
    ll t, a, b, c, soma; cin>>t;
    vl lista;
    for (ll i = 0 ; i < t ; i++) {
        cin>>a>>b>>c;
        lista.push_back(a);
        while(1) {
            soma = lista.back() + c;
            if (soma <= b) {
                lista.push_back(soma);
            }
            else {
                copy(lista.begin(), lista.end(), ostream_iterator<ll> (cout, " ")); cout<<'\n';
                lista.clear();
                break;
            }
        }
    }
    return 0;
}