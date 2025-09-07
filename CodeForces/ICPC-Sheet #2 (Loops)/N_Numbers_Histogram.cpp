#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string s;
    int n,x;
    cin>>s>>n;
    for(int i = 0; i < n ; i++){
        cin>>x;
        for (int j = 0; j < x; j++){
            cout<<s;
        }
        cout<<endl;
    }

    return 0;
}