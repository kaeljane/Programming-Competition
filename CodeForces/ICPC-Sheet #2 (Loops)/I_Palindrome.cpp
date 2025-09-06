#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string n, newS;
    cin>>n;
    //ordem inversa e sem zeros à esquerda.
    // verificar se é um numero palindromo 
    // se o zero está simplesmente a esquerda vamos deixar e quando transformar em inteiro esses zeros vao sumir
    for (int i = (n.size()-1); i >= 0; i--){
        newS += n[i]; 
    }
    long long resposta = stoll(newS); //  transformando em inteiro (stoi-> inteiro) (stoll -> long long)
    cout<<resposta<<endl;
    if (n == newS) {cout<<"YES"<<endl;}
    else {cout<<"NO"<<endl;}

    return 0;
}