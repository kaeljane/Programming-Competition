#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int a, b;
    cin>>a>>b;
    vector<int> sorte = {};
    int numero_sorte = 0;

    for (int i = a; i <= b ; i++) {
        string k = to_string(i);
        int tamanho = k.size();
        
        for (int j = 0 ; j < tamanho ; j++) {
            if (k[j] == '4' || k[j] == '7'){
                numero_sorte += 1;
            } 
            else {numero_sorte = 0; break;} // se não tiver nem 4 ou 7 então pare e va analisar o proximo
            if (numero_sorte == tamanho){
                sorte.push_back(i);
                numero_sorte = 0;
            }
        }

    }
    if (sorte.size() == 0) {sorte.push_back(-1);}
    
    // lendo dados do vector
    for (int& numero : sorte) {
        cout<<numero<<" ";
    }

    return 0;
}