#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int n, teste;
    int even = 0, odd = 0, positive = 0, negative = 0;
    cin>>n;
    for(int i = 0 ; i < n; i++){
        cin>>teste;
        if (teste % 2 == 0){even++;}
        else {odd++;}
        if (teste > 0){positive++;}
        else if (teste < 0) {negative++;}
    }
    cout<<"Even: "<<even<<endl;
    cout<<"Odd: "<<odd<<endl;
    cout<<"Positive: "<<positive<<endl;
    cout<<"Negative: "<<negative<<endl;


    return 0;
}