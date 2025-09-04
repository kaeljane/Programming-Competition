#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath> // usar pow(numero, expoente)
using namespace std;

int main() {
    long long a,b,c,d;
    // int lenght_1, lenght_2;
    cin>>a>>b>>c>>d;
    // a^b > c^d
    string new_a = to_string(a); // para obter o tamanho da string
    string new_b = to_string(b);
    string new_c = to_string(c);
    string new_d = to_string(d);
    // cout<<new_a<<" "<<new_c<<endl;

    if (new_a.size() >= 3 && new_c.size() >= 3){
        int lenght_1 = new_a.size()-1;
        long double numero11 = pow((a/pow(10,lenght_1)), b);

        int lenght_2 = new_c.size()-1;
        long double numero22 = pow((c/(pow(10, lenght_2))), d); 

        if (a == c) {
            if (b>d) {cout<<"YES"<<endl;}
            else {cout<<"NO"<<endl;}
        }
        if (b == d){
            if (a > c) {cout<<"YES"<<endl;}
            else {cout<<"NO"<<endl;}
        }
        else if (new_a.size() == new_c.size() && new_b.size() == new_d.size()) {
            // todos os números possuem o mesmo tamanho.
            if (pow(new_a[0], new_b[0]) > pow(new_c[0], new_d[0])) {cout<<"YES"<<endl;}
            else {
                if (b>1.5*d){
                    cout<<"YES"<<endl;
                }
                else {
                    cout<<"NO"<<endl;
                }
            }
        }

        else if (b > (d+10)) {cout<<"YES"<<endl;}
        else if (b+10 < d) {cout<<"NO"<<endl;}
        else if (b*2 < d) {cout<<"NO"<<endl;}
        else if (b > 2*d) {cout<<"YES"<<endl;}
        else if (numero11 > numero22) {cout<<"YES"<<endl;}
        else {cout<<"NO"<<endl;}
    }
    else {
        long long numero1 = pow(a, b);
        long long numero2 = pow(c, d);
        if (numero1 > numero2) {cout<<"YES"<<endl;}

        else {cout<<"NO"<<endl;}
    }

    return 0;
}