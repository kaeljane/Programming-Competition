#include <bits/stdc++.h>
#define ll unsigned long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n;
    string name;
    cin>>n;
    for (ll i = 0 ; i < n ; i++){
        cin>>name;
        // string menor ou igual a 10
        if (name.size() <= 10) {cout<<name<<'\n';}
        // string maior do que 10
        else {
            ll tamanho = name.size()-2;
            // por último -------------------------------------
            cout<<name[0]<< tamanho << name.back() << '\n';
        }
    }
    //by Kaeljane
    return 0;
}