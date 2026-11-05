#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vs vector<string>
#define vl vector<long long>
#define vd vector<long double>
#define vll vector<vector<long long>>
#define ___ ios::sync_with_stdio(false); cin.tie(nullptr);
// 02/10/2025 by Kaeljane
using namespace std;

int main() {
    ___
    ll L,C,X; cin>>L>>C>>X;
    ll lado_1 = L, lado_2 = C;

    for (ll i = 0; i < X; i++) {
        if (lado_1 < lado_2) lado_1 +=1;
        else if (lado_1 > lado_2) lado_2 +=1;
        else lado_1+=1; 
    }

    cout << lado_1*lado_2 <<'\n';
    return 0;
}