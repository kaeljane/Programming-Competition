#include <bits/stdc++.h>
#define ll unsigned long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll x, y, t, menor, maior, soma = 0;
    
    // quant. de testes
    cin>>t;
    
    for (int i = 0 ; i < t ; i++) {
        cin>>x>>y;
        
        if (x < y) {menor = x; maior = y;} else{menor = y; maior = x;}

        for (int j = menor+1 ; j < maior ; j++) {
            // impar : acontece o máximo possível.
            if (j % 2 != 0) {
                soma+=j;
                j++;
            }
            // par : simplesmente vai adicionar 1 e vai cair no if anterior

        }
        cout<<soma<<endl;
        soma = 0;
        
    }

    return 0;
}