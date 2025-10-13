#include <bits/stdc++.h>
#define ll unsigned long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;
    int sol = 0;
    cin>>N;
    vector<int> A(N);
    vector<int> M(N);
    
    for(auto&a : A) cin>>a;
    for(auto a : A) //cout<<a<<' '; cout<<'\n';

    M[N-1] = A[N-1];
    for (int i = N-2 ; i >= 0; i--){
        M[i] = max(M[i+1], A[i]);
    }
    // for (auto m : M) //cout<<m<<' '; cout<< '\n';

    for (int i=0; i<N-1; i++){
        int delta = M[i+1] - A[i];
        sol = max(sol, delta);
    }
    cout<< sol << '\n';

    return 0;
}