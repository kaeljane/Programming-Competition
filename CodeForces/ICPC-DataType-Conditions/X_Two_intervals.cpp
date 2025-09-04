#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int l1, r1, l2, r2;
    vector<int> interseccao;
    cin>>l1>>r1>>l2>>r2;
    if (l1 == r1 && l2 == r2 && l1 == l2) {
        interseccao.push_back(l1);
        interseccao.push_back(r1);
    }
    else {
        if (l2 <= l1 && l1 <= r2){
            auto it = find(interseccao.begin(), interseccao.end(), l1);
            if (it == interseccao.end()) {
                interseccao.push_back(l1);
            }
        }
        if (l2 <= r1 && r1 <=r2){
            auto it = find(interseccao.begin(), interseccao.end(), r1);
            if (it == interseccao.end()) {
                interseccao.push_back(r1);
            }
        }
        if (l1 <= l2 && l2 <=r1) {
            auto it = find(interseccao.begin(), interseccao.end(), l2);
            if (it == interseccao.end()) {
                interseccao.push_back(l2);
            }
        }
        if (l1 <= r2 && r2 <= r1) {
            auto it = find(interseccao.begin(), interseccao.end(), r2);
            if (it == interseccao.end()) {
                interseccao.push_back(r2);
            }
        }
        if (interseccao.empty() == true) {
            interseccao.push_back(-1);
        }
    }
    if (interseccao.size() == 1 && interseccao[0] != -1) {
        interseccao.push_back(interseccao[0]);
    }
    sort(interseccao.begin(), interseccao.end());
    // find(interseccao.begin(), interseccao.end(), );

    bool primeiro_elemento = true;
    
    // for (int& numero : interseccao) {
    //     if (!primeiro_elemento) {
    //         cout<<" ";
    //     }
    //     cout<<numero;
    //     primeiro_elemento = false;
    // }
    // ou
    for (int i = 0; i < interseccao.size()-1; i++) {
        cout<<interseccao[i]<<" ";
    }
    cout<<interseccao.back()<<endl;
    
    return 0;
}