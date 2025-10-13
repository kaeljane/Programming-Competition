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
    ll horas, paul_hours ;
    vl horas_trabalhadas;

    while(cin>>horas) {
        horas_trabalhadas.push_back(horas);
    }
    paul_hours = horas_trabalhadas.back();
    horas_trabalhadas.pop_back();
    horas_trabalhadas.erase(horas_trabalhadas.begin() + 0);

    for(auto h : horas_trabalhadas) {
        if (h > paul_hours) cout<<h<<'\n';
    }


    return 0;
}