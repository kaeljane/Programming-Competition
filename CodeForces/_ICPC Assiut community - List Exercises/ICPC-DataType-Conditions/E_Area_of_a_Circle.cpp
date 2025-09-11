#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath> // necessário para pow
#include <iomanip>
using namespace std;

int main() {
    double R;
    long double area;
    long double pi = 3.141592653;
    cin>>R;

    area = pi*pow(R, 2);
    cout << fixed << setprecision(9) << area <<endl;
    return 0;
}