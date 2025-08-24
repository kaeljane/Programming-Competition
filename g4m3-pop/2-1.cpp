#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
    // preciso tirar todos os P's
    string texto;
    getline(cin, texto);
    string resultado = "";
    bool k = false;
    for (int i = 0; i < texto.length(); i++)
    {
        if ((texto[i] == 'P') and (k == true)) {
            resultado += texto[i];
            k = false;
        }
        else {
            if (texto[i] == 'P') {
                k = true;
            }
            else {
                resultado += texto[i];
                k = false;
            }
        }
    }
    cout << resultado << endl;

    return 0;
}