#include <bits/stdc++.h>
#define ll unsigned long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t, soma = 1;
    cin >> t;

    for (int i = t; i > 0; i--)
    {
        // t = 4 -1 = (i = 3) 
        for (int j = 0; j < i-1; j++){
            cout << " ";
        }

        for(int k = 0 ; k < soma ; k++){
            cout<<"*";
        }
        soma+=2;
        cout << '\n';
    }

    return 0;
}