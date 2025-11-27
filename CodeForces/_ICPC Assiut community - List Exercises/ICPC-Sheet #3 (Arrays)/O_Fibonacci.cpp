#include <iostream>
#include <vector>
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    vector<long long> fibonacciList;
    fibonacciList.push_back(0); // first iten
    fibonacciList.push_back(1); // sec iten
    // F(n) = f(n - 1) + f(n - 2)'
 
    // adicionando itens no vector
    for(int i = 0; i <= n-3; i++){ // 'n' é o último indice
        fibonacciList.push_back(fibonacciList[0 + i] + fibonacciList[1 + i]);
    }
    cout<<fibonacciList[n-1]<<endl;
    // analisando os itens do vetor:
    // for (const int& numero : fibonacciList) {
    //     cout<< numero <<endl;
    // }
    // int size = fibonacciList.size();
    // cout<<fibonacciList[size]<<" último item"<<endl;
    // cout<<fibonacciList.size()<<" tamanho da lista"<<endl;
    
 
    return 0;
}