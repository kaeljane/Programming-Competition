#include <iostream>
using namespace std;

int main()
{
    long long a, b, c, d;
    cin >> a >> b >> c >> d;

    if ((1LL * a * b + c) == d)
        cout << "YES" << endl;
    else if ((1LL * a * (b + c)) == d)
        cout << "YES" << endl;
    else if ((1LL * a * b - c) == d)
        cout << "YES" << endl;
    else if ((1LL * a * (b - c)) == d)
        cout << "YES" << endl;
    else if ((a + 1LL * b * c) == d)
        cout << "YES" << endl;
    else if ((a - 1LL * b * c) == d)
        cout << "YES" << endl;
    else if ((a + b - c) == d)
        cout << "YES" << endl;
    else if ((a - b + c) == d)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
