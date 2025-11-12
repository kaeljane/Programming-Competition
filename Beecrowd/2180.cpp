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

bool isPrime(ll num) {
    if (num <= 1) return false;
    if (num == 2) return true;
    if (num % 2 == 0) return false;
    for (ll i = 3; i * i <= num; i += 2) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

/* (mind) 

*/
void solve() {
    cin >> x; 
    
    ll sum_speed = 0;
    int prime_count = 0;
    ll current_num = x; 
    
    while (prime_count < 10) {
        if (isPrime(current_num)) {
            sum_speed += current_num;
            prime_count++;
        }
        current_num++; 
    }
    
    ll speed = sum_speed;
    ll distance = 60000000;
    
    ll time_hours = distance / speed;
    ll time_days = time_hours / 24;
    
    cout << speed << " km/h\n";
    cout << time_hours << " h / " << time_days << " d\n";
}

signed main() {
    ___
    solve(); 
    
    return 0;
}