#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define ll long long
using namespace std;
/*

*/
int main() {
    string s, aux;
    cin>>s; aux = s;
    reverse(all(aux));

    if (s == aux) cout << "eh palindromo" << '\n';
    else cout << "nao eh palindromo" << '\n';

    return 0;
}
