#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vs vector<string>
#define vl vector<long long>
#define vll vector<vector<long long>>
#define ___ ios::sync_with_stdio(false); cin.tie(nullptr);
// 27/09/2025 by Kaeljane
using namespace std;

int main() {
    ___
    string A, B, A_back; cin>>A>>B; A_back = A;
    ll tam_A, tam_B;

    tam_A = A.size(); tam_B = B.size();
    
    cout<<tam_A<<" "<<tam_B<<'\n';
    cout<<A<<B<<'\n';

    A[0] = B[0];
    B[0] = A_back[0];

    cout<<A<<" "<<B<<'\n';
    


    return 0;
}