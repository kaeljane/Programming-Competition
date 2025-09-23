#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vs vector<string>
#define vl vector<long long>
#define vll vector<vector<long long>>
#define ___ ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;
// 22/09/2025 by Kaeljane
int main()
{
    ___;
    ll cand, cortes;
    cin >> cand >> cortes;
    ll nota_candidato, nota_corte, resposta, k;
    vl lista_cand;
    // vl lista_notas_backup;

    for (ll i = 0; i < cand; i++)
    {
        cin >> nota_candidato;
        lista_cand.push_back(nota_candidato);
        // cout << nota_candidato << " ";
    }
    // cout << '\n';

    sort(lista_cand.begin(), lista_cand.end()); // ordem correta
    // copy(lista_cand.begin(), lista_cand.end(), ostream_iterator<ll>(cout, " "));
    // cout << '\n';
    // cout << '\n';

    for (ll c = 0; c < cortes; c++)
    {
        cin >> nota_corte;
        cout << nota_corte << ' ';
        ll qt = 0;

        // indices
        ll a = 0, b = cand - 1;
        while (a <= b)
        {
            resposta = 0;
            ll k = (a + b) / 2;
            // cout << k << ' ';
            // cout << "a = " << a << " b = " << b << '\n';
            

            if (lista_cand[k] > nota_corte)
                b = k - 1;
            else
                a = k + 1;

            if (lista_cand[0] == lista_cand[k] && lista_cand[k] < nota_corte) {
                resposta = (lista_cand.size() - 1) - k;
            }
            else if (lista_cand[0] == lista_cand[k] && lista_cand[k] > nota_corte) {
                resposta = lista_cand.size();
            }
            else if (lista_cand[k] > nota_corte) {
                resposta = (lista_cand.size()-1) - (k-1);
            }
            // else if(lista_cand[k] < nota_corte) {
            //     // resposta = (lista_cand.size() - 1) - (k+1);
            // }
            else resposta = (lista_cand.size() - 1) - k;
        }

        cout << resposta<<'\n';
        // cout<<'\n';
    }

    return 0;
}