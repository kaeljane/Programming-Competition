#include <bits/stdc++.h>
#define ll long long
#define all(x) (x).begin(), (x).end()
#define el '\n'
using namespace std;

ll n, t;

signed main() {
    cin>>n;
    if (1 <= n && n <= 125) {
        cout << 4 << el;
    }
    else if (126 <= n && n <= 211) {
        cout << 6 << el;
    }
    else if (212 <= n && n <= 214) {
        cout << 8 << el;
    }
}
