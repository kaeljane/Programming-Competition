#include <bits/stdc++.h>
#define ll unsigned long long
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t, n, x; cin>>t;
    long long resposta = -1;
    vector<int> array = {};
 
    for (ll _ = 0 ; _ < t ; _++){
        cin>>n;
        array.push_back(n);
    }
    cin>>x;
    for (int i = 0 ; i < array.size() ; i++){
        if (array[i] == x){resposta = i; break;}
    }
    
    cout<<resposta<<'\n';
    // by Kaeljane
    return 0;
}