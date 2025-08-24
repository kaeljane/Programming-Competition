#include <iostream>
using namespace std;

int main()
{
    int rows = 5;
    // cada linha que precisamos
    for (int i = 0; i < rows; i++)
    {
        for (int j = rows-1; j > i; j--) {
            cout<<' ';
        }
        for (int k = 0; k<i+1; k++){
            cout<<'*';
        }
        for (int t = 0; t<i; t++){
            cout<<'*';
        }
        cout<<endl;
    }
}