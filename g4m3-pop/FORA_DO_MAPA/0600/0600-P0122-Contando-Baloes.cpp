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
    ll times, qt_prob; cin>>times>>qt_prob;
    ll baloes_necessarios = times*qt_prob;
    ll soma=0;
    ll baloes;

    for (ll i = 0; i < times ; i++) {
        cin>>baloes;
        soma+=baloes;
    }

    cout<<baloes_necessarios-soma<<'\n';
    return 0;
}