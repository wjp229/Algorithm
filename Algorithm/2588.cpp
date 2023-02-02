#include <iostream>

using namespace std;

int sol2588()
{
    int a, b;
    cin >> a >> b;

    cout << a * (b % 10) << endl;
    cout << a * ((b / 10) % 10) << endl;
    cout << a * (b / 100) << endl;
    cout << a * b;

    return 0;
}
