#include <bits/stdc++.h>
#define ll unsigned long long
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    std::cin >> n;
 
 
    std::vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
    }
 
 
    int menor_numero = std::numeric_limits<int>::max(); 
    for (int i = 0; i < n; ++i) {
        menor_numero = std::min(menor_numero, a[i]);
    }
 
    int contagem = 0;
    for (int i = 0; i < n; ++i) {
        if (a[i] == menor_numero) {
            contagem++;
        }
    }
 
    if (contagem % 2 != 0) {
        std::cout << "Lucky" << std::endl;
    } else {
        std::cout << "Unlucky" << std::endl;
    }
 
    return 0;
}