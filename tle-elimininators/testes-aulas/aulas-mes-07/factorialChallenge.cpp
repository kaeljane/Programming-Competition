#include <iostream>
using namespace std;

int main()
{
    int factorial;
    int multi = 1; 
    cin>>factorial;

    // calculo
    for (int k = 1; k <= factorial; k++){
        multi *= k;
    }
    for (int n = 1; n <= factorial; n++) {
        cout<<n;
        if (n< factorial) cout<<"*";
    }

    cout<<" = "<<multi<<endl;
    return 0;
}
