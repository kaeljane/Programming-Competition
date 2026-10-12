#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define ll long long
using namespace std;

/*
    
*/

ll f(string s) {
    ll soma = 0;
    for (ll i = 0; i < s.size(); i++) {
        if (isalpha(s[i])) {
            soma += tolower(s[i]) - 'a' + 1; // nao pode ter parentese aqui
        }
    }

    while (soma > 9) { // lembrar disso
        string ss = to_string(soma);
        soma = 0;
        for (ll i = 0; i < ss.size(); i++) {
            soma += ss[i] - '0';
        }
    }
    return soma;

}

void solve() {
    string a, b;
    while(getline(cin, a) && getline(cin, b)) {
        ll v1 = f(a);
        ll v2 = f(b);

        double calc = (double)min(v1, v2)/max(v1, v2) * 100;

        cout << fixed << setprecision(2) << calc << " %" << '\n';

    }   

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    // ll t; cin>>t; 
    // while (t--)
    solve();

    return 0;
}