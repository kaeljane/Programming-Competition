#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vs vector<string>
#define vl vector<long long>
#define vd vector<long double>
#define vll vector<vector<long long>>
#define ___ ios::sync_with_stdio(false); cin.tie(nullptr);
// 04/10/2025 by Kaeljane in Maratona Superior POP
using namespace std;

int main() {
    ___
    int n; 
    vi xs; vi ys;
    for (int i = 0; i < 8; i++) {
        cin>>n;
        if (i % 2 == 0) {
            xs.push_back(n);
        }   
        else {
            ys.push_back(n);
        }
    }

    int menor_x = *min_element(xs.begin(), xs.end());
    int menor_y = *min_element(ys.begin(), ys.end());
    
    int maior_x = *max_element(xs.begin(), xs.end());
    int maior_y = *max_element(ys.begin(), ys.end());

    int x = abs(maior_x - menor_x);
    int y = abs(maior_y - menor_y);

    cout << x*y << '\n';

    return 0;
}