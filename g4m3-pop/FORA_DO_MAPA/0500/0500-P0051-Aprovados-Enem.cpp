#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vs vector<string>
#define vl vector<long long>
#define vll vector<vector<long long>>
#define ___ ios::sync_with_stdio(false); cin.tie(nullptr);
// 27/09/2025 by Kaeljane
using namespace std;

int main() {
    ___
    ll nota, resposta = 0, media;
    vl areas;
    while (cin>>nota) {
        areas.push_back(nota);
        if (areas.size() == 5) {
            media = (accumulate(areas.begin(), areas.end(), 0LL))/5;
            if (media >= 700) resposta++;
            areas = {};
        }
    }
    cout<<resposta<<'\n';

    return 0;
}