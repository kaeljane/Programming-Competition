#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define ii pair<ll, int>
#define iii par<ll, ii>
#define vi vector<int>
#define vc vector<char>
#define vb vector<bool>
#define vs vector<string>
#define vl vector<long long>
#define vd vector<long double>
#define vll vector<vector<long long>>
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v.rend)
#define rev(v) reverse(all(v))
#define sort(v) sort(all(v))
#define rsort(v) sort(rall(v))
#define soma(v) accumulate(all(v), 0LL)
#define max_el(v) *max_element(all(v))
#define min_el(v) *min_element(all(v))
#define sz(v) (v).size()
#define vazio(v) (v).empty()
#define lb lower_bound
#define ub upper_bound
#define fi first
#define pb push_back
#define pf push_front
#define ppb pop_back
#define ppf pop_front
#define sec second
#define umap unordered_map
#define uset unordered_set
#define imp(v, t, e) copy(v.begin(), v.end(), ostream_iterator<t> (cout, e))
#define ___ ios::sync_with_stdio(false); cin.tie(nullptr);
// 15/11/2025 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7;
ll MAXI = 1e9 + 7;
ll INF = 1e18 + 7;

ll n, t, k, x, y, z;
string s, a, b, c;

/* (mind) 
        
        
*/

pair<ll, ll> somaMaisProxima(vector<ll> list, ll x) {
        ll n = list.size();
        ll s = 0, e=n-1;
        ll absDiff = INT_MAX;
        ll l, r;

        while (s<e){
                ll somaAtual = list[s] + list[e];
                if (abs(somaAtual - x) < absDiff){
                        l = s;
                        r = e;
                        absDiff = abs(somaAtual - x);

                }
                if (somaAtual > x) e--;
                else s++;
        }

        return {list[l], list[r]};
}

vl girarVetorHorario(vl list, ll n) {
        t = sz(list);
        n = n%t;

        vl output;
        for (ll i=t-n; i <= t-1; i++) {
                output.pb(list[i]);
        }

        for (ll i=0; i < t-n; i++){
                output.pb(list[i]);
        }
        return output;
}

vl girarVetorHorarioOtimizado(vl list, ll n) {
        t = sz(list);
        n = n%t;

        reverse(list.begin(), list.begin() + t - n);
        reverse(list.begin() + t-n, list.end());
        rev(list);
        return list;
}

void bubbleSort (vl &v) {
        ll tam = sz(v);
        for (ll times=1; times < tam; times++) {
                for (ll j=0; j <= tam - times - 1; j++) {
                        if (v[j] > v[j+1] ) {
                                swap(v[j], v[j+1]);
                        }
                }
        }
}

void insertionSort(vl &v) {
        ll tam = sz(v);
        for (ll i=1; i < tam; i++) {
                ll atual = v[i];
                ll ant = i - 1;
                while (ant>=0 && v[ant] > atual) {
                        v[ant+1] = v[ant];
                        ant = ant - 1;
                }
                v[ant+1] = atual;
        }
}

void selectionSort(vl &v) {
        for (ll pos=0; pos <= sz(v) - 2; pos++) {
                ll atual = v[pos];
                ll minPosition = pos;
                // encontrar o mínimo elemento
                for (ll j=pos; j < sz(v); j++) {
                        if(v[j] < v[minPosition]) {
                                minPosition = j;
                        }
                }
                swap(v[minPosition], v[pos]);
        }
}

// algoritmo de ordenação!! array de frequência | numeros positivos
void countingSort(vl &v) {
        if (vazio(v)) return;
        ll maior = max_el(v);// maior elemento
        vl freq(maior+1, 0);// array dinâmico
        for (ll i=0; i < sz(v); i++) freq[v[i]]++;//update freq

        ll j=0;
        for (ll i=0;i <= maior; i++) {// colocar de volta no original
                while (freq[i] > 0) {
                        v[j] = i;
                        freq[i]--;
                        j++;
                }
        }
        return;
}

void printMatrizInspiralAntiga(int arr[][10], int n, int m){
        int startRow = 0;
        int endRow = n - 1;
        int startCol = 0;
        int endCol = m -1;

        while (startCol <= endCol && startRow <= endRow) {
                for (int col = startCol; col <= endCol; col++) {
                        cout << arr[startRow][col];
                }
                for (int row = startRow + 1; row <= endRow; row++) {
                        cout << arr[row][endCol];
                }
                for (int col = endCol - 1; col >= startCol; col--) {
                        if  (startRow==endRow) {
                                break;
                        }
                        cout << arr[endRow][col];
                }
                for (int row = endRow-1; row >= startRow + 1; row--) {
                        if (startCol == endCol) {
                                break;
                        }
                        cout << arr[row][startCol];
                }

                startRow++;
                endRow--;
                startCol++;
                endCol--;
        }
}

void printMatrizInspiral(const vll &matriz) {
        // Checagem de segurança
        if (matriz.empty() || matriz[0].empty()) return;
        ll n = matriz.size();    // número de linhas
        ll m = matriz[0].size(); // número de colunas

        // A lógica da "espiral" é a mesma do código original
        ll startRow = 0;
        ll endRow = n - 1;
        ll startCol = 0;
        ll endCol = m - 1;

        while (startCol <= endCol && startRow <= endRow) {
                // Imprime a linha do topo (da esq p/ a dir)
                for (ll col = startCol; col <= endCol; col++) cout<<matriz[startRow][col]<<" ";
                startRow++; // Move a fronteira da linha do topo para baixo
                
                // Imprime a coluna da dir (de cima p/ baixo)
                for (ll  row = startRow; row <= endRow; row++) cout<<matriz[row][endRow]<< " ";
                endCol--; // Move a fronteira da coluna da dir para a esq

                // Imprime a linha de baixo (da dir p/ esq )
                // (Só se a linha de baixo não for a mesma que a do topo)
                if (startRow <= endRow) {
                        for (ll col = endCol; col >= startCol; col--) cout<<matriz[endRow][col]<< " "; 
                        endRow--; // Move a fronteira da linha de baixo para cima
                }

                // Imprime a coluna da esq (de baixo para cima)
                // (Só se a coluna da esquerda não for a mesma que a da direita)
                if (startCol <= endCol) {
                        for (ll row = endRow; row >= startRow; row--) cout<<matriz[row][startCol]<<" ";
                        startCol++;
                }

        }

}


void solve() {
        vl teste = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
        // 0 3 7 6 11 0  6  7  10 12
        // 0 3 7 7 11 11 11 11 11 12
        ll best = 0, sum=0;
        for (ll k=0; k < teste.size(); k++) {
                sum = max(teste[k], sum+teste[k]);
                best = max(best, sum);
        }
        cout << best << '\n';

}
signed main() {
        ___
        vl vitu = {10, 20, 30, 40, 50};
        
        pair<int, int> par = somaMaisProxima(vitu, 30);
        
        cout << par.first << ' ' << par.second << '\n';

        vl out = girarVetorHorarioOtimizado(vitu, 3);
        imp(out, ll, " ");

        vl v = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
        bubbleSort(v);

        for (auto x : v) {
                cout << x <<  ",";
        }

        cout << '\n';

        insertionSort(v);
        for (auto x : v) {
                cout << x <<  ",";
        }
        // -------------------------------------------
        vl kk = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
        selectionSort(kk);

        cout << '\n';
        
        for (auto x : kk) {
                cout << x <<  ",";
        }
        cout << '\n';
        // -------------------------------------------


        vl teste1 = {2, 3, 4, 1, 5, 12, 6, 1, 3};

        countingSort(teste1);

        for (ll x : teste1) cout << x << ",";

        cout << '\n';
        cout << '\n';
        // -------------------------------------------
        
        vll minhaMatriz = {
                        {1, 2, 3, 4},
                        {5, 6, 7, 8},
                        {9, 10, 11, 12},
                        {13, 14, 15, 16}
                        };
        
        printMatrizInspiral (minhaMatriz);
        cout << '\n';

        vll outraMatriz = {
                {1, 2, 3},
                {4, 5, 6},
                {7, 8, 9}
        };

        printMatrizInspiral(outraMatriz);

        cout << '\n' << '\n';

        // solve();
        
        return 0;
}

