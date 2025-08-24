#include <bits/stdc++.h>
using namespace std;

int main()
{
    // colocar todos os sensores formando uma linha reta
    // cada invasor ativaria uma sequência de sensores
    int n, k, s;
    int anterior = 0;
    int armadilhas = 0;

    cin >> k; // 5

    for (int i = 1; i <= k; i++)
    {
        cin >> s; // 1
        if ((s == 1) && (anterior == 0))
        {
            armadilhas+=1;
            anterior = s;
        }
        else anterior = s;
    }
    cout << armadilhas << endl;
    return 0;
}
