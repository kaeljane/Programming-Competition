#include <iostream>
using namespace std;

int main()
{
    int rows = 5;
    for (int i = 0; i < rows; i++)
    {
        for (int j = rows - 1; j > i; j--)
        {
            cout <<" ";
        }
        for (int k=0; k<(i+1); k++) {
            cout<<"*";
        }
        cout<<endl;
        
    }
}