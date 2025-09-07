#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int t, k, x;
    int p = 1;
    bool a = true;
    cin>>t;
    for (int i = 0; i<t; i++){
        // estamos dentro de cada lógica agora.
        cin>>k>>x;
        for(int p = 1 ; p <= 100 ; p++){
            int number_inicial = p;
            int number_analisado = number_inicial;
            //até k procedimentos
            for(int j = 1 ; j<=k ; j++){
                if (number_analisado % 2 == 0) {number_analisado /= 2;}
                else{number_analisado = 3*number_analisado + 1;}
            }
            
            if(number_analisado == x) {cout<<number_inicial<<endl; break;}
            // else{number_inicial +=1;}
        }
    }

    return 0;
}