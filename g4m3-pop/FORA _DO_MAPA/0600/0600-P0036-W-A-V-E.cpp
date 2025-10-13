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
    string s; cin>>s;
    
    for (auto& c : s) {
        c = tolower(c);
    }
    for (auto& c : s) {
        c = toupper(c);
        cout<<s<<'\n';
        c = tolower(c);
    }
    
    return 0;
}