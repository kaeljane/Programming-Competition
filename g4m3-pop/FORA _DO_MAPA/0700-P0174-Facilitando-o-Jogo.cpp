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
    ll t;
    cin >> t;
    ll n, indiceA, indiceP, indiceC;
    string fase;
    while (t--)
    {
        cin >> n;
        cin >> fase;
        ll qt = 0;

        auto itA = find(fase.begin(), fase.end(), 'A');
        auto itP = find(fase.begin(), fase.end(), 'P');
        auto itC = find(fase.begin(), fase.end(), 'C');

        indiceA = distance(fase.begin(), itA);
        indiceP = distance(fase.begin(), itP);
        indiceC = distance(fase.begin(), itC);

        ll difA_P = abs(indiceA - indiceP);
        ll difA_C = abs(indiceA - indiceC);

        if (difA_C == difA_P) {
            cout << "FUGIU!"<<'\n';
        }

        else if (difA_P < difA_C)
        {
            cout << fase[indiceP] << " " << difA_P << '\n';
        }
        else
        {
            cout << fase[indiceC] << " " << difA_C << '\n';
        }
    }

    return 0;
}