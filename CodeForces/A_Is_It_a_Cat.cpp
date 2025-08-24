#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    int ok = 0;
    string k;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        cin >> k; // digite a palavra
        for (int j = 0; j < k.length(); j++)
        {
            if (k[j] == 'm' || k[j] == 'e' || k[j] == 'o' || k[j] == 'w' || k[j] == 'M' || k[j] == 'E' || k[j] == 'O' || k[j] == 'W')
            {
                ok++;
                // cout << "ok" << endl;
            }

            if (ok == k.length())
            {
                cout << "YES" << endl;
                ok = 0;
            }
            if (j == k.length() && k.length()!=ok)
            {
                cout << "NO" << endl;
                ok = 0;
            }
        }
    }

    // j -> iniciando com 0, j precisa ser menor do que o tamanho da lista
    // cout<<i<<endl;
    // cout<<"YES"<<endl;
    return 0;
}



