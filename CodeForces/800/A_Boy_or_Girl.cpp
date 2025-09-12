#include <bits/stdc++.h>
#define ll unsigned long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // numero de caracter distintos. -> impar -> homem, caso contrário -> mulher.
    // analisar se o caracter especifico tem uma duplicata adicione em uma variavel a quantidade de duplicatas
    // faça o total de caractere menos a duplicata
    ll duplicatas=0;

    string name, name_backup;
    vector<string> duplicatavec = {};
    cin>>name;
    name_backup = name;
    for (ll l = 0 ; l < name.size(); l++){
        for (ll c = 0; c < name.size(), c != l ; c++){
            if (name_backup[l] == name_backup[c]) {
                duplicatas++;
                name_backup[c] = '0';

            }
        }
        // cout<<name_backup<<'\n';
        // cout<<"Duplicatas de "<<name[l]<<" "<<duplicatas<<'\n';
    }
    ll condicao = name.size()-duplicatas;
    // cout<<condicao<<'\n';

    if (condicao % 2 == 0) {cout<<"CHAT WITH HER!"<<'\n';}
    else {cout<<"IGNORE HIM!"<<'\n';}

    // by Kaeljane
    return 0;
}