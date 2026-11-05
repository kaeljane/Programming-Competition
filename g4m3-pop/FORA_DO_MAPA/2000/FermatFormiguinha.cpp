#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define ii pair<ll, int>
#define vi vector<int>
#define vc vector<char>
#define vb vector<bool>
#define vs vector<string>
#define vl vector<long long>
#define vd vector<long double>
#define vll vector<vector<long long>>
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define rev(v) reverse(all(v))
#define soma(v) accumulate(all(v), 0LL)
#define max_el(v) *max_element(all(v))
#define min_el(v) *min_element(all(v))
#define sz(v) ((int)(v).size())
#define vazio(v) (v).empty()
#define fi first
#define pb push_back
#define pf push_front
#define ppb pop_back
#define ppf pop_front
#define sec second
#define el '\n'
#define umap unordered_map
#define uset unordered_set
#define imp(v, t, e) copy(v.begin(), v.end(), ostream_iterator<t> (cout, e))
#define ___ ios::sync_with_stdio(false); cin.tie(nullptr);
// 22/11/2025 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7;

const int MAXN = 1e6 + 5;

ll n, t, k, x, y, z;
string s, a, b, c;

/* (mind) 
        
        
*/
const int MAX_COORD = 2100000; 
const ll INF = 1e18;

int next_prime[MAX_COORD];
bool is_composite[MAX_COORD];

void build_sieve() {
    is_composite[0] = is_composite[1] = true; 
    for (int i = 2; i * i < MAX_COORD; i++) {
        if (!is_composite[i]) {
            for (int j = i * i; j < MAX_COORD; j += i)
                is_composite[j] = true;
        }
    }

    int last_prime = -1;
    for (int i = MAX_COORD - 1; i >= 0; i--) {
        if (!is_composite[i]) {
            last_prime = i;
        }
        next_prime[i] = last_prime;
    }
}

struct Point {
    int x, y;
    bool operator<(const Point& other) const {
        return x < other.x;
    }
};

void solve() {
    int n;
    if (!(cin >> n)) return;

    vector<Point> ants(n);
    for(int i = 0; i < n; i++) {
        cin >> ants[i].x >> ants[i].y;
    }

    // Ordenar por X
    sort(all(ants));

    vector<int> prefMin(n), prefMax(n);
    vector<int> suffMin(n), suffMax(n);

    prefMin[0] = prefMax[0] = ants[0].y;
    for(int i = 1; i < n; i++) {
        prefMin[i] = min(prefMin[i-1], ants[i].y);
        prefMax[i] = max(prefMax[i-1], ants[i].y);
    }

    suffMin[n-1] = suffMax[n-1] = ants[n-1].y;
    for(int i = n-2; i >= 0; i--) {
        suffMin[i] = min(suffMin[i+1], ants[i].y);
        suffMax[i] = max(suffMax[i+1], ants[i].y);
    }

    ll min_total_perimeter = INF;

    for (int i = 2; i <= n - 3; i++) {
        int width_L = ants[i-1].x - ants[0].x;
        int height_L = prefMax[i-1] - prefMin[i-1];
        
        ll p_width_L = next_prime[width_L];
        ll p_height_L = next_prime[height_L];
        ll perimeter_L = 2LL * (p_width_L + p_height_L);

        int width_R = ants[n-1].x - ants[i+1].x;
        int height_R = suffMax[i+1] - suffMin[i+1];

        ll p_width_R = next_prime[width_R];
        ll p_height_R = next_prime[height_R];
        ll perimeter_R = 2LL * (p_width_R + p_height_R);

        min_total_perimeter = min(min_total_perimeter, perimeter_L + perimeter_R);
    }

    cout << min_total_perimeter << el;
}

signed main() {
    ___
    build_sieve(); 
    solve();
    return 0;
}