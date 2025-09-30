#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vs vector<string>
#define vl vector<long long>
#define vd vector<long double>
#define vll vector<vector<long long>>
#define ___ ios::sync_with_stdio(false); cin.tie(nullptr);
// 29/09/2025 by Kaeljane
using namespace std;

int main() {
    ___
    string palavra;
    bool palindromo = true;
    for(ll i = 0 ; i < palavra.size(); i++) {
        if(palavra[i] == palavra[palavra.size()-i]);
        else palindromo = false;
    }
    // AA

    if (palindromo)  cout<<"YES"<<'\n';
    else cout<<"NO"<<'\n';

    return 0;
}