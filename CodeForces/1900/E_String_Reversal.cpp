#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define ll long long
using namespace std;

/*
    
*/

ll merge_e_conta(vector<ll>& arr, vector<ll>& temp, ll esq, ll meio, ll dir) {
    ll i = esq;
    ll j = meio;
    ll k = esq; //
    ll inv_count = 0;

    while((i <= meio-1) && (j <= dir)) {
        if (arr[i] <= arr[j]) {
            temp[k++] = arr[i++];
        }
        else {
            temp[k++] = arr[j++];
            inv_count = inv_count + (meio-i);
        }
    }

    while (i <= meio - 1) {
        temp[k++] = arr[i++];
    }

    while(j <= dir) {
        temp[k++] = arr[j++]; //
    }

    for (i = esq; i <= dir; i++) {
        arr[i] = temp[i];
    }
    return inv_count;
} 

ll mergeSort(vector<ll>& arr, vector<ll>& temp, ll esq, ll dir) {
    ll inv_count = 0;

    if (dir > esq) {
        ll meio = (dir + esq) / 2;
        inv_count += mergeSort(arr, temp, esq, meio);
        inv_count += mergeSort(arr, temp, meio+1, dir);
        inv_count += merge_e_conta(arr, temp, esq, meio+1, dir);
    }
    return inv_count;
}

ll contarInversoes(vector<ll> &arr) {
    ll n = arr.size();
    vector<ll> temp(n);
    return mergeSort(arr, temp, 0, n-1);
}

void solve() {
    ll n; cin>>n;

    string original; cin>>original;
    string alvo = original; reverse(all(alvo));

    vector<queue<ll>> pos(26);

    for (ll i = 0; i < n; i++) {
        pos[alvo[i] - 'a'].push(i);
    }

    vector<ll> destinos(n);

    for (ll i = 0; i < n; i++) {
        char letraAtual = original[i];
        destinos[i] = pos[letraAtual - 'a'].front();
        pos[letraAtual - 'a'].pop();
    }

    cout << contarInversoes(destinos) << '\n';

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    // ll t; cin>>t; 
    // while (t--)
    solve();

    return 0;
}