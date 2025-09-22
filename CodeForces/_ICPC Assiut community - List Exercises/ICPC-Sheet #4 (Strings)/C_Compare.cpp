#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vl vector<long long>
# define ___ ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;

int main() {
    ___;
    string s1, s2; cin>>s1>>s2;
    ll tam_s1=0, tam_s2=0;
    for(ll i = 0 ; i <s1.size(); i++) tam_s1 += s1[i];
    for(ll k = 0 ; k <s2.size(); k++) tam_s2 += s2[k];
    // cout<<tam_s1<<'\n';
    // cout<<tam_s2<<'\n';

    if (tam_s1 < tam_s2) cout<<s1<<'\n';
    else if (tam_s1 > tam_s2) cout<<s2<<'\n';
    

    return 0;
}