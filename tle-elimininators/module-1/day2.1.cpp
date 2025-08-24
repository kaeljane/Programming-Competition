#include <iostream>
#include <string>
using namespace std;

int main()
{
    string m, n;
    cin>>n>>m;
    
    // need different names
    int k = n[n.length()-1] - '0';
    int j = m[m.length()-1] - '0';

    // need transformation in int
    
    cout<<k+j<<endl;

    return 0;
}
