#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Somar o número de melões colhidos e comparar com o total esperado pelo colheteiro
    // Se o total colhido for igual ou superar o valor esperado, a situação é NADA PREOCUPANTE. OK
    // Total colhidos for menor que ate 5 unidades POUCO PREOCUPANTE.
    // Menor ainda é MUITO PREOCUPANTE.
    // N -> n produtores
    // E -> valor total esperado
    int n,e,qmelao;
    int somaMelao = 0;
    cin>>n>>e;
    for (int i = 1; i<=n; i++) {
        cin>>qmelao;
        somaMelao+=qmelao;
    }
    if (somaMelao >= e) cout<<"NADA PREOCUPANTE";
    else if (somaMelao >= (e-5)) cout<<"POUCO PREOCUPANTE"<<endl;
    else if (somaMelao < (e-5)) cout<<"MUITO PREOCUPANTE"<<endl;
    else cout<<"ERRO INESPERADO"<<endl;
    return 0;
}