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
    ll n; cin>>n;
    string palavra;

    for(ll i = 0; i < n; i++) {
        cin>>palavra;
        if (palavra.size() <= 10) {
            cout<<palavra<<'\n';
        }
        else cout<<palavra[0]<< palavra.size()-2 << palavra.back()<<'\n';
    }

    return 0;
}