#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define ll long long
using namespace std;

/*
    socorro
    mil horas depois
*/

void solve() {
    ll caso;
    long double x1, y1, x2, y2, x3, y3, x4, y4;
    cin>>caso>>x1>>y1>>x2>>y2>>x3>>y3;

    // falta sqrt, tudo bem...
    // saber os pontos da hipotenusa
    long double calc1 = abs(x1 - x2)*abs(x1 - x2) + abs(y1 - y2)*abs(y1 - y2);
    long double calc2 = abs(x1 - x3)*abs(x1 - x3) + abs(y1 - y3)*abs(y1 - y3);
    long double calc3 = abs(x2 - x3)*abs(x2 - x3) + abs(y2 - y3)*abs(y2 - y3);
    // nao precisa de abs mas ja coloquei...
    
    long double maxx = max({calc1, calc2, calc3});
    if (calc1 == maxx) { //p1 e p2
        x4 = x1 + x2 - x3;
        y4 = y1 + y2 - y3;
    }
    else if (calc2 == maxx) { // p1 e p3
        x4 = x1 + x3 - x2;
        y4 = y1 + y3 - y2;
    }
    else if (calc3 == maxx) { // p2 e p3
        x4 = x2 + x3 - x1;
        y4 = y2 + y3 - y1;
    }
    cout << caso << " ";
    cout << fixed << setprecision(9) << x4 << " " << y4 << '\n';

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll t; cin>>t; 
    while (t--)
    solve();

    return 0;
}