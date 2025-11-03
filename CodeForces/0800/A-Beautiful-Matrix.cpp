#include <bits/stdc++.h>
#define vll vector<vector<long long>>
#define ll long long
using namespace std;

int main() {
    ll numero, linha, coluna, qt=0;
    vll matriz = {{0,0,0,0,0}, {0,0,0,0,0}, {0,0,0,0,0}, {0,0,0,0,0}, {0,0,0,0,0}};
    for (int i = 0 ; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin>>numero;
            matriz[i][j] = numero;
            if (matriz[i][j] == 1) {
                linha = i;
                coluna = j;
            }
        }
    }
    linha += 1;
    coluna += 1;
    qt = abs(3 - linha) + abs(3 - coluna);
    cout<<qt<<'\n';

}

