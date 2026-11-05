#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vs vector<string>
#define vl vector<long long>
#define vd vector<long double>
#define vll vector<vector<long long>>
#define ___ ios::sync_with_stdio(false); cin.tie(nullptr);
// 30/09/2025 by Kaeljane
using namespace std;

int main() {
    ___
    ll letras_diferent=0;
    string palavra; cin >> palavra;
    bool palindromo = true;

    for(ll i = 0 ; i < palavra.size(); i++) {
        if(palavra[i] == palavra[(palavra.size()-1 - i)]) {
        }
        else {
            letras_diferent+=1;
            palindromo = false;
        }
        if (i == palavra.size()/2) break;
    }
    if (palindromo == true)  cout<<"NO"<<'\n'; 
    else if (palindromo == false && letras_diferent == 1) cout<<"YES"<<'\n';
    else cout << "NO" << '\n';

    
    return 0;
}