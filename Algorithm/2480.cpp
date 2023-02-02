#include <iostream>

using namespace std;

int sol2480()
{
    int a, b, c;

    cin >> a >> b >> c;

    int tmp;
    if (a < b)
    {
        tmp = b;
        b = a;
        a = tmp;
    }
    if (b < c)
    {
        tmp = c;
        c = b;
        b = tmp;
    }
    if (a < b)
    {
        tmp = b;
        b = a;
        a = tmp;
    }

    if((a == b) && (b == c))
    {
        cout << 10000 + a * 1000;
    }
    else if(a == b)
    {
        cout << 1000 + a * 100;
    }
    else if(b == c)
    {
        cout << 1000 + b * 100;
    }
    else
    {
        cout << a * 100;
    }

    return 0;
}
