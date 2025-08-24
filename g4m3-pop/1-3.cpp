#include <bits/stdc++.h>
using namespace std;

int main()
{
    // ns -> numero de sensores
    // r -> valor referência
    int ns, r, k;
    cin >> ns >> r;

    for (int i = 1; i <= ns; i++){
        cin >> k;
        if (k<=r) cout<<1<<endl;
        else cout<<0<<endl;
    }

    return 0;
}