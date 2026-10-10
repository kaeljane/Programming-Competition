#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define ll long long
using namespace std;

/*
    nome,
    termina a graduacao (2010 +)
    aniversário         (1991)


*/

void solve() {
    string s, grad, aniver; ll courses; cin>>s>>grad>>aniver>>courses;
    
    string anoGrad; anoGrad += grad[0]; anoGrad += grad[1]; anoGrad += grad[2]; anoGrad += grad[3]; 
    string anoAniver; anoAniver += aniver[0]; anoAniver += aniver[1]; anoAniver += aniver[2]; anoAniver += aniver[3];
    
    ll anoGradInt = stoll(anoGrad);
    ll anoAniverInt = stoll(anoAniver);
    ll qtDeSemestre = ceil((double)courses / 5);

    if (anoGradInt >= 2010) cout << s << " eligible" << '\n';
    else if (anoAniverInt >= 1991) cout << s << " eligible" << '\n';
    else if (qtDeSemestre > 8) cout << s << " ineligible" << '\n';
    else {
        cout << s << " coach petitions" << '\n';
    }
    
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll t; cin>>t; 
    while (t--)
    solve();

    return 0;
}