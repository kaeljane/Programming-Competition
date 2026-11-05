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
    string ip; cin>>ip;
    ip.push_back('.');
    string aux = "";
    ll soma = 0;

    for (ll i = 0; i < ip.size(); i++) {
        if (ip[i] != '.') {
            aux.push_back(ip[i]);
        }
        else {
            soma += stoll(aux);
            aux = "";
            continue;
        }
    }

    if (soma % 8 == 0) cout<<"BLOCK"<<'\n';
    else cout<<"PASS"<<'\n';

    return 0;
}