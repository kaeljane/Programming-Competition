#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define ll long long
using namespace std;
/*
sequencia de vogais sao iguais
*/
int main() {
    string aux, s, revv;
    cin>>s;
    for (auto x : s) {
        if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u') {
            aux += x;
        }
    }
    revv = aux;
    reverse(all(revv));
    
    if (revv == aux) cout << 'S' << '\n';
    else cout << 'N' << '\n';


    return 0;
}