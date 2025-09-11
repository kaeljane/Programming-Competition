#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <bitset>
using namespace std;

int main() {
    long long a,b;
    string zerus = "00000000000000000000000000000000";
    cin>>a>>b;
    bitset<32> bits(a);
    bitset<32> bits1(b);
    string bits_str = bits.to_string();
    string bits_str1 = bits1.to_string();
    for (int i = 31; i >= 0; i--) {
        if ((bits_str[i] == '1' && bits_str1[i] == '1') || (bits_str[i] == '0' && bits_str1[i] == '0')){
            // deixa zeru
        }
        else if (bits_str[i] == '1' && bits_str1[i] == '0'){
            zerus[i] = '1';
        }
        else if (bits_str[i] == '0' && bits_str1[i] == '1'){
            zerus[i] = '1';
        }
        
    }
    bitset<32> resposta(zerus);
    unsigned long long R = resposta.to_ullong();
    cout<<R<<endl;


    return 0;
}