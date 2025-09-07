#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    int n;
    vector<int> divisiveis = {2};
    // vector<int> num_compostos = {};
    int quant_divisores = 1;
    cin>>n;
    if (n >= 2){
        for(int i=3;i<=n; i++){

            for (int j = 1 ; j <= i/2; j++){
                if (i % j == 0) {
                    quant_divisores++;
                }
            }

            if (quant_divisores == 2) {divisiveis.push_back(i);}
            // else {num_compostos.push_back(i);}
            quant_divisores = 1;
        }
    }
    for (int& numero_primo : divisiveis) {
        cout<<numero_primo<<" ";
    }
    // cout<< endl;
    // for (int& numero_composto : num_compostos) {
    //     cout<<numero_composto<<" ";
    // }

    return 0;
}