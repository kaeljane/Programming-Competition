#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define ll long long
using namespace std;
/*
    decifrar

    ter      	tuveros
    t
    - for procurando a vogal mais proxima

    vogais nao são modificadas.


*/

void solve() {
    vector<char> alf = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 
        'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'x',
        'z'
    };

    set<char> vog = {'a', 'e', 'i', 'o', 'u'};

    string ans = "", s; cin>>s;

    for (ll i = 0; i < s.size(); i++) {
        if (vog.count(s[i])) ans += s[i];
        else {
            auto it = lower_bound(all(alf), s[i]);
            ll idx = it - alf.begin();
            pair<ll, ll> pos1; // qt, idx;
            pair<ll, ll> pos2;
            ans += s[i];
            
            bool b1=0, b2=0;
            for (ll j = idx; j >= 0; j--) {
                if (vog.count(alf[j])) {
                    pos1.first = idx - j;
                    pos1.second = j;
                    break;
                }
                else if (j == 0) {
                    b1 = 1;
                }
            }

            for (ll j = idx; j < alf.size(); j++) {
                if (vog.count(alf[j])) {
                    pos2.first = abs(idx - j);
                    pos2.second = j;
                    break;
                }
                else if (j == alf.size()-1) {
                    b2 = 1;
                }
            }

            if (b1) ans += alf[pos2.second];
            else if (b2) ans += alf[pos1.second];
            else {
                if (pos1.first <= pos2.first) {
                    ans += alf[pos1.second];
                }
                else {
                    ans += alf[pos2.second];
                }
            }

            if (s[i] == 'z') ans += 'z';
            else {
                for (ll j = idx+1; j < alf.size(); j++) {
                    if (!vog.count(alf[j])) {
                        ans += alf[j];
                        break;
                    }
                }
            }
        }
    }

    cout << ans << '\n';

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    // ll t; cin>>t; 
    // while (t--)
    solve();

    return 0;
}
