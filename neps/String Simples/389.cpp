#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define ll long long
using namespace std;
/*
se tiver P maiusculo deixa!!
se tiver dois p de vizinho entao deixa!

*/
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n; string s;
    getline(cin, s);
    n = s.size();

    for (ll i = 0; i < n; i++) {
        if (s[i] == 'p') {
            cout << s[i+1];
            i++;
        }
        else cout << s[i];
    }

    return 0;
}
