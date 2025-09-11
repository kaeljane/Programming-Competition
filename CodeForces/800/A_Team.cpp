#include <bits/stdc++.h>
#define ll unsigned long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // vao implementar o problema somente se dois deles tem certeza da solução

    ll t, bi, imp = 0; cin>>t;

    for(ll _ = 0 ; _ < t ; _++){
        ll qt = 0;
        for (ll __ = 0 ; __ < 3 ; __++) {
            cin>>bi;
            if (bi == 1) {qt++;}
        }
        if (qt >= 2){imp++;}
    }
    cout<<imp<<'\n';
    // by Kaeljane
    return 0;
}