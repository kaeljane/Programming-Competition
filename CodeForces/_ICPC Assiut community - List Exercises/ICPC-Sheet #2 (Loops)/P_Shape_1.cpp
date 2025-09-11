#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin>>n;
    for(int i = n; i > 0; i--){ // primeira linha a última
        for(int j = 1; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}