#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vs vector<string>
#define vl vector<long long>
#define vd vector<long double>
#define vll vector<vector<long long>>
#define ___ ios::sync_with_stdio(false); cin.tie(nullptr);
// 30/09/2025 by Kaeljane
using namespace std;

int n, g, c;

int f(int x) {
    return ceil(x + g / (x + 1.0));
}
int main() {
    ___
    int t; cin>>t; 
    while (t--) {
        cin>>n>>g>>c;
        int lo = 0;
        int hi = g;
        for (int i = 0; lo != hi && i < 30; ++i) {
            const int delta = floor((hi - lo) / 3.0);
            int m1 = lo + delta;
            int m2 = hi - delta;
            const int aux_m1 = f(m1);
            const int aux_m2 = f(m2);
            if (aux_m1 < aux_m2) {
                hi = m2;
            }
            else if (aux_m1 >= aux_m2) {
                lo = m1;
            }
        }
        int me = f(hi);
        int cur = me;
        while (hi && cur <= me) {
            if (cur < me) me = cur;
            --hi;
            cur = f(hi);
        }
        ++hi;
        if (f(hi) <= n) cout << "WE CAN SAVE THE WORLD\n";
        else cout<<"WE ARE DOOMED\n";
        cout<<hi * c<<'\n';
        
    }
    return 0;
}