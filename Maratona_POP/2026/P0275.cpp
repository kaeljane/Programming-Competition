#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define ll long long
using namespace std;

/*
    qt de vezes que uma opcao valida
    foi escolhida consecutividamente 
    antes da falha do sistema

    'a', 'b', 'c' e 'd'

*/

void solve() {
    char c;
    ll atual = 0;
    
    set<char> cj = {'a', 'b', 'c', 'd'};

    while (cin>>c) {
        if (cj.count(c)) {
            atual++;
        }
        else {
            break;
        }
    }
    cout << atual << '\n';
    

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    // ll t; cin>>t; 
    // while (t--)
    solve();

  
    return 0;
}