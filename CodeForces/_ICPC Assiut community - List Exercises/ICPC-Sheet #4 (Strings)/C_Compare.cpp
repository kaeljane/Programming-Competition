#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vs vector<string>
#define vl vector<long long>
#define vll vector<vector<long long>>
# define ___ ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;

int main() {
    ___;
    string s1, s2; cin>>s1>>s2;

    if (s1 > s2) cout<<s2<<'\n';
    else if ( s1 == s2) cout<<s1<<'\n';
    else if (s1 < s2) cout<<s1<<'\n';

    return 0;
}