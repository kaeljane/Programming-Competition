#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int n, m, tamanho_maior;
    cin>>n>>m;
    bool s = false;
    vector<int> divisores_n = {};
    vector<int> divisores_m = {};
    
    // Entrada de dados no vector
    for (int i = 1 ; i <= n ; i++){
        if(n%i == 0){divisores_n.push_back(i);}
    }
    for (int i = 1 ; i <= m ; i++){
        if(m%i == 0){divisores_m.push_back(i);}
    }
    // MDC
    for (int k = (divisores_n.size()-1) ; k >=0 ; k--) {
        for (int j = (divisores_m.size()-1) ; j >= 0; j--) {
            if (divisores_n[k] == divisores_m[j]){
                cout<<divisores_n[k]<<endl;
                s = true;
                break;
            }
        }
        if(s == true){break;}
    }
  
    // analisando numeros de dentro do vector
    // for(int& numero : divisores_n){
    //     cout<<numero<<" ";
    // }
    // cout<<endl;
    // for(int& numero_ : divisores_m){
    //     cout<<numero_<<" ";
    // }

    return 0;
}