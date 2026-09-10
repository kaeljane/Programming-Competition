#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define ll long long
using namespace std;
/*

*/
int main() {
    ll n; string s; 
    cin>>s;
    map<char, ll> mp;
    mp['A'] = 2, mp['B'] = 2, mp['C'] = 2;
    mp['D'] = 3, mp['E'] = 3, mp['F'] = 3;
    mp['G'] = 4, mp['H'] = 4, mp['I'] = 4;
    mp['J'] = 5, mp['K'] = 5, mp['L'] = 5;
    mp['M'] = 6, mp['N'] = 6, mp['O'] = 6;
    mp['P'] = 7, mp['Q'] = 7, mp['R'] = 7, mp['S'] = 7;
    mp['T'] = 8, mp['U'] = 8, mp['V'] = 8;
    mp['W'] = 9, mp['X'] = 9, mp['Y'] = 9, mp['Z'] = 9;
    
    for (ll i = 0; i < s.size(); i++) {
        if (isalpha(s[i])) {
            cout << mp[s[i]];
        }
        else {
            cout << s[i];
        }
    }


    return 0;
}
