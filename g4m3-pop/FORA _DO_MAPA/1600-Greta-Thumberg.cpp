#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vs vector<string>
#define vl vector<long long>
#define vd vector<long double>
#define vll vector<vector<long long>>
#define ___ ios::sync_with_stdio(false); cin.tie(nullptr);
// 30/09/2025 by Kaeljane
using namespace std;

// ll busca_ternaria(vl& lista) {
//     ll l = 0;
//     ll r = lista.size()-1;
    
//     while ((l + 2) < r) {
//         ll m1 = l + (r - l) / 3;
//         ll m2 = r - (r - l) / 3;

//         if (lista[m1] < lista[m2]) {
//             r = m2;
//         }
//         else {
//             l = m1;
//         }
//     }
//     ll minimo_local = lista[l];
    
//     return minimo_local;    

// }

ll formula(ll g, ll x){
    ll formula = x + (g +x) / (x + 1);
    return formula;
}

int main(){
    int n; cin >> n;
    for (ll i = 0; i < n; i++) {
        ll b, g, c; cin >> b >> g >> c;

        ll indice;
        vl lista = {};
        vl lista_indices = {};
        for (ll j = 0; j < g; j++) {
            lista.push_back(formula(g, j));
            lista_indices.push_back(j);
        }

        // ll menor = busca_ternaria(lista);

        ll menor = *min_element(lista.begin(), lista.end());

        for (auto ind : lista_indices) {
            if (lista[ind] == menor) {
                indice = ind;
                break;
            }
        }

        if (menor <= b) cout << "WE CAN SAVE THE WORLD"<<'\n';
        else cout << "WE ARE DOOMED" << '\n';

        cout << indice*c <<'\n';

    }

}
