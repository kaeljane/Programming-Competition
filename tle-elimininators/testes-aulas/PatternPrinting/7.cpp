#include <iostream>
using namespace std;
// *******
// #*****
// ##***
// ###*
// ##***
// #*****
// *******
int main()
{
    int rows = 4;
    int rows_2 = 3;
    int rows_2_backup = 3;
    int numero_linhas = 5; // 7-2
    int random = 3;

    for(int i = 0; i < rows; i++){
        if(i == 0) {
            for (int j = 0; j<7; j++){
                cout<<"*";
            }
            cout<<endl;
        }
        else {
            for (int j = 1; j <= i; j++) {
                cout<<" ";
            }
            for (int k = 0; k<numero_linhas; k++) {
                cout<<"*";
                
            }
            numero_linhas-=2;
            cout<<endl;
        }
        
    }
    for (int k = 0; k<rows_2; k++) {
        for (int j = 1; j<rows_2_backup; j++) { //1<3 2<3 3<3
            cout<<" ";
        }
        rows_2_backup-=1;

        for(int u = 0; u<random; u++) {
            cout<<"*";
        }
        random+=2;

        cout<<endl;
    }
}
