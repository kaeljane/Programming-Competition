#include <bits/stdc++.h>
#define ll unsigned long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t, inicial = 0; cin>>t;
    string operacao;

    for (ll _ = 0; _ < t ; _++){
        // para caso teste
        cin>>operacao;
        if (operacao == "X++") inicial++;
        if (operacao == "++X") ++inicial;
        if (operacao == "--X") --inicial;
        if (operacao == "X--") inicial--;

    }
    cout<<inicial<<'\n';
    


    // by Kaeljane
    return 0;
}