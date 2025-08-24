#include <iostream>
using namespace std;

int main()
{
    for (int i = 0; i < 5; i++)
    {
        cout << i << endl;
    }

    int x = 25, z = 10;
    int y = 17;
    cout << !((x < y) || (x < y)) << endl;
    return 0;
}
