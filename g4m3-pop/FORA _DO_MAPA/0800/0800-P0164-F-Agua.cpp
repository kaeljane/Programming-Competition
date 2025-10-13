#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define vi vector<int>
#define vc vector<char>
#define vs vector<string>
#define vl vector<long long>
#define vd vector<long double>
#define vll vector<vector<long long>>
#define ___ ios::sync_with_stdio(false); cin.tie(nullptr);
// 09/10/2025 by Kaeljane
using namespace std;

int main() {
    ___
    // 1.000L -> 1.000.000
    ll ml, litros=1000000;
    ll ben=0;
    while(cin>>ml) {
        litros -= ml;
        if(litros >= 0) ben += 1;
        else {ben+=1; break;}
    }
    cout << "Beneficiados: " << ben << '\n';
    if (litros >= 0) cout << "Todos satisfeitos!" << '\n';
    else cout << "Faltou: " << abs(litros) <<"ml para completar o último!" << '\n';

    return 0;
}