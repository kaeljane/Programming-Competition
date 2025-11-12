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
#define imp(v, t) copy(v.begin(), v.end(), ostream_iterator<t> (cout, ))
#define ___ ios::sync_with_stdio(false); cin.tie(nullptr);
// 12/11/2025 by Kaeljane
using namespace std;

ll n, t, k, y, z;
unsigned long long x; 
string s, a, b, c;

/* (mind) 
 
*/
void solve() {
    unsigned long long num = x; 
    
    if (num == 0) {
        cout << "0\n";
        return;
    }
    
    string result = "";
    
    while (num > 0) {
        int rem = num % 32;
        
        if (rem < 10) {
            result += (char)(rem + '0');
        } 
        else {
            result += (char)((rem - 10) + 'A');
        }
        
        num /= 32; 
    }
    
    reverse(all(result));
    cout << result << '\n';
}

signed main() {
    ___
    
    while(cin >> x) {
        solve(); 
        
        if (x == 0) { 
            break; 
        }
    }
    
    return 0;
}