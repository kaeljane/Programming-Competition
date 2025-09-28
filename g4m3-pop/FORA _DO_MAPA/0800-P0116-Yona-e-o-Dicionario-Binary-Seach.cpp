#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vs vector<string>
#define vl vector<long long>
#define vll vector<vector<long long>>
# define ___ ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;
// 22/09/2025 by Kaeljane
int main() {
    ___;
    ll n, m, perguntas; cin>>n>>m;
    long double coluna;
    string nome, palavra;
    vs lista;
    
    for (ll i = 0; i < n*m ; i++) {
        cin>>nome;
        lista.push_back(nome);
    }

    copy(lista.begin(), lista.end(), ostream_iterator<string> (cout, " "));
    cout<<'\n';

    cin>>perguntas;
    for (ll k = 0; k < perguntas; k++) {
        cin>>palavra;
        cout<<palavra<<' ';
        
        // indices
        ll a = 0, b = lista.size()-1;

        while(a<=b) {
            ll meio = (a + b)/2; //metade
            
            long double m_ld = (a + b)/2;

            if (lista[meio] == palavra) {
                coluna = ceil((m_ld+1)/m);
                // cout<<" "<< m_ld <<" ";
                cout<<coluna;
                break;
            }
            if ( (lista[meio]) > palavra) {b = meio-1;}
            else {a = meio+1;}
        }
        cout<<'\n';
    }
    return 0;
}