#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    long long testes, num;
    long long factorial = 1;
    cin>>testes;
    for (int i = 0; i<testes;i++){
        cin>>num; 
        for (int j = num; j >= 1 ; j--){
            factorial *= j;
        }
        cout<<factorial<<endl;
        factorial = 1;
    }
    // testando uma função: (deu algum erro, mas nao deixa de ser uma solucao)
    // for (int i = 0 ; i < testes; i++) {
    //     cin>>num;
    //     double a = tgamma(num+1);
    //     cout<<a<<endl;
    // }

    // double a = tgamma(5+1);
    // cout<<a<<endl;
    return 0;
}