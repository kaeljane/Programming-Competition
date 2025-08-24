#include <iostream>
using namespace std;

int main (){
    int rows = 5;
    int k = 1;
    for (int i = 1; i <= rows;i++) {
        for (int j = 1; j<i; j++) {
            cout<<k++<<" ";
        }
        cout<<endl;
    }
}
