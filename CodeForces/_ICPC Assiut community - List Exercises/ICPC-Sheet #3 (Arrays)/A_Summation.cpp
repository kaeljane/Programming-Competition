#include <bits/stdc++.h>
#define ll unsigned long long
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    long long n, soma = 0;
 
    cin>>t;
    for (ll _ = 0 ; _ < t ; _++){
        cin>>n;
        soma += n;
    }
    cout<<abs(soma)<<'\n';
 
    // by Kaeljane
    return 0;
}