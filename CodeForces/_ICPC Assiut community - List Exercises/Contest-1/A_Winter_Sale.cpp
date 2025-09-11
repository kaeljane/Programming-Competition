#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
using namespace std;

int main() {
    // quer comprar uma t-shirt para o filho dela
    double x, p;
    cin>>x>>p;
    double calculo = (p/(100-x))*100;
    cout<<fixed<<setprecision(2)<<calculo<<endl;

    return 0;
}