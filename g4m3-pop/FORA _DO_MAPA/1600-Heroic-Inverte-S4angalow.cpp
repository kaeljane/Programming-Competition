#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;

    vector<ll> numeros(n);
    for (int i = 0; i < n; i++) {
        cin >> numeros[i];
    }

    vector<int> inversoes_sufixo(n + 1, 0);

    for (int i = n - 1; i >= 0; i--) {
        inversoes_sufixo[i] = inversoes_sufixo[i + 1];
        if (numeros[i] < 0) {
            inversoes_sufixo[i]++;
        }
    }

    for (int i = 0; i < n; i++) {
        if (inversoes_sufixo[i] % 2 != 0) {
            numeros[i] *= -1;
        }
    }

    for (int i = 0; i < n; i++) {
        cout << numeros[i] << (i == n - 1 ? "" : " ");
    }
    cout << '\n';

    return 0;
}