#include <iostream>
using namespace std;

int main()
{
    int k;
    bool resultado = false;
    cin>>k;
    for(int i=2; i<k; i++) {
        if(k == 2) {
            resultado = true;
            break;
        }
        if(k%i==0) {
            resultado = false;
            break;
        }
        else {
            resultado = true;
        } 
    }
    
    if (resultado == false){
        cout<<"NO"<<endl;
    }
    else {
        cout<<"YES"<<endl;
    }
}
