#include <bits/stdc++.h>
#define ll unsigned long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long t, n; cin>>t;
    vector<ll> array;
    for (ll _ = 0 ; _ < t ; _++){
        cin>>n;
        if (n > 0) {n = 1; array.push_back(n);}
        else if (n == 0) {array.push_back(n);}
        else {n=2; array.push_back(n);}
    }

    for (auto& numero : array){
        cout<<numero<<' ';
    }

    return 0;
}