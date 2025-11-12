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

ll n, t, k, x, y, z;
string s, a, b, c;

/* (mind) 
        
        
*/

int binary_search(int arr[], int t, int key) {
        int s = 0;
        int e = t - 1;

        while (s<=e) {
                int mid = (s+e)/2;
                if (arr[mid] == key) {
                        return mid;
                }
                else if (arr[mid] > key) {
                        e = mid - 1;
                }
                else {
                        s = mid + 1;
                }
        }
        return -1;
}

void solve() {
        
        
}
signed main() {
        ___
        t=1;
        cin>>t;
        while(t--)solve();
        
        return 0;
}