#include <iostream>

using namespace std;

int sol2884()
{
    int h, m;
    cin >> h;
    cin >> m;

    m -= 45;

    if (m < 0)
    {
        h -= 1;
        m += 60;
    }
    if (h < 0)
    {
        h += 24;
    }

    cout << h << " " << m << endl;

    return 0;
}
