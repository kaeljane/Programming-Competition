#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Chegou 27 dias depois da competição
    // Diminuição na plantação de arroz.
    int qpesmelao,mcolhidos,cadaPeProduzidoIdeal;
    cin>>qpesmelao>>mcolhidos>>cadaPeProduzidoIdeal;
    if ((qpesmelao*cadaPeProduzidoIdeal) > mcolhidos) cout<<"SIM"<<endl;
    else cout<<"NAO"<<endl;
    return 0;
}