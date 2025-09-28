#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vs vector<string>
#define vl vector<long long>
#define vll vector<vector<long long>>
#define ___ ios::sync_with_stdio(false); cin.tie(nullptr);
// 00/09/2025 by Kaeljane
using namespace std;

int main() {
    ___
    string palavra; cin>> palavra;
    for (ll i = 0; i < palavra.size(); i++) {
        if (palavra[i] == ',') {
            palavra[i] = ' ';
        }
        else {
            if ('A' <= palavra[i] && palavra[i] <= 'Z') {
                palavra[i] += 32;
            }
            else if ('a' <= palavra[i] && palavra[i] <= 'z') {
                palavra[i] -= 32;
            }
        }
    }
    cout<<palavra<<'\n';

    return 0;
}