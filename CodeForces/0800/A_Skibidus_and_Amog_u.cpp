#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define vi vector<int>
#define vc vector<char>
#define vs vector<string>
#define vl vector<long long>
#define vd vector<long double>
#define vll vector<vector<long long>>
#define all(v) v.begin(), v.end()
#define imp(v, t) copy(v.begin(), v.end(), ostream_iterator<t> (cout, ' '))
#define ___ ios::sync_with_stdio(false); cin.tie(nullptr);
// 23/10/2025 by Kaeljane
using namespace std;

/* (mind) 
    remove us!!
    s.erase(s.size()-1); -> remove for index
*/
void solve() {
    ll t; cin>>t;
    string s, new_s;
    while(cin>>s) {
        s.erase(s.size()-1); s.erase(s.size()-1); s.push_back('i');
        cout << s << '\n';
    }

    
}
int main() {
    ___
    
    solve();
    
    return 0;
}