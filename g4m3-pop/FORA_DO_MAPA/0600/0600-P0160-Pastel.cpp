#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vs vector<string>
#define vl vector<long long>
#define vll vector<vector<long long>>
#define ___ ios::sync_with_stdio(false); cin.tie(nullptr);
// 28/09/2025 by Kaeljane
using namespace std;

int main() {
    ___
    ll lado_mesa, d_pastel, qt_pastel = 0; cin>>lado_mesa>>d_pastel;
    qt_pastel += (lado_mesa/d_pastel)*(lado_mesa/d_pastel);
    cout<<qt_pastel<<'\n';
    return 0;
}