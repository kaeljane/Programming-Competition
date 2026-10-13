#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define ll long long
using namespace std;

/*
    
*/

void solve() {
    ll n; char letra; string resul;
    
    vector< pair<char, string> > pares;
    vector<char> letras;
    
    ll calc = 0;
    
    while(cin>>n) {
        if (n == -1) break;
        
        cin>>letra>>resul;
        
        if (resul == "right") {
            letras.push_back(letra);
            calc += n;
        }
        else {
            pares.push_back({letra, resul});
        }
        
    }
    
    sort(all(pares));
    sort(all(letras));
    
    for (ll i = 0; i < letras.size(); i++) {
        for (ll j = 0; j < pares.size(); j++) {
            if (letras[i] == pares[j].first) calc += 20;
        }
    }
    
    cout << letras.size() << " " << calc << '\n';
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    // ll t; cin>>t; 
    // while (t--)
    solve();

    return 0;
}