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
    ll t, poder_a = 0, poder_b = 0; cin>>t;
    string a, b;

    while(t--) {
        cin>>a>>b;
        poder_a = 0;
        poder_b = 0;
        for(ll i = 0; i < a.size(); i++) {
            if (a[i] == 'a') poder_a +=1;
            else if (a[i] == 'e') poder_a +=2;
            else if (a[i] == 'i') poder_a +=3;
            else if (a[i] == 'o') poder_a +=4;
            else if (a[i] == 'u') poder_a +=5;
            else if (a[i] == 'y') poder_a +=100;
        }

        for(ll i = 0; i < b.size(); i++) {
            if (b[i] == 'a') poder_b +=1;
            else if (b[i] == 'e') poder_b +=2;
            else if (b[i] == 'i') poder_b +=3;
            else if (b[i] == 'o') poder_b +=4;
            else if (b[i] == 'u') poder_b +=5;
            else if (b[i] == 'y') poder_b +=100;
        }

        if (poder_a > poder_b) cout<<a<<'\n';
        else if (poder_a < poder_b) cout<<b<<'\n';
        else cout<<"naruto"<<'\n';
    }


    return 0;
}