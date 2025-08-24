#include <iostream>
using namespace std;

// *****
// *   *
// *   *
// *   *
// *****
// podendo escolher o tamanho do quadrado.

int main(){
    int l;
    cin>>l;
    
    for (int i = 0; i<l;i++) {
        if(i == 0 || i == (l-1)) {
            for (int inicio_fim = 0; inicio_fim < l; inicio_fim++){
                cout<<'*';
            }
            cout<<endl;
        }
        else {
            for (int k = 0; k<l; k++) {
                if(k==0 || k ==l-1) cout<<'*';
                else cout<<' ';
            }
            cout<<endl;
        }
        
    }
}
