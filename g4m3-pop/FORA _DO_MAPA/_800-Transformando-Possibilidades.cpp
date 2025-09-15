#include <bits/stdc++.h>
#define ll unsigned long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // trasformar o primeiro nome no segundo.

    // custo 0 -> mudar posição de qualquer caractere do primeiro nome.
    // custo 1 -> mudar qualquer letra do primeiro nome para uma letra de minha escolha.

    string nome1, nome2;

    cin >> nome1 >> nome2;

    string karalho = "";
    bool booleana = false;
    map<string, int> qt_letras;

    // for (int c = 0; c < nome2.size(); c++)
    // {
    //     cout << nome2[c] << ' ';
    //     booleana = false;
    //     if (c == 0)
    //     {
    //         karalho.push_back(nome2[c]);
    //     }
    //     else
    //     {
    //         for (int k = 1; k < karalho.size() && nome2[c] != nome1[k]; k++)
    //         {
    //             if (nome2[c] == nome2[k])
    //             {
    //                 booleana = true;
    //             }
    //         }

    //         if (booleana == false)
    //         {
    //             karalho.push_back(nome2[c]);
    //             // cout << nome2[c] << ' ';
    //         }
    //     }
    // }



    
    cout<<'\n';
    for (auto& letra : karalho){
        cout<<letra<<' ';
    }

    return 0;
}