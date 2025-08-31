#include <iostream>
using namespace std;
// *
// **
// ***
// ****
// *****
int main()
{
    int rows = 5;
    for (int i = 0; i < rows; i++)
    {
        // vai ser adicionado em uma só linha
        for (int j = 0; j <= i; j++)
        {
            cout<<"*";
        }
        cout << "\n";
    } 
}