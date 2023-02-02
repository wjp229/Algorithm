#include <iostream>

using namespace std;

int sol2753()
{
    int year;

    cin >> year;

    if ((year % 400) == 0)
    {
        cout << 1;
        return 0;
    }
    else if((year % 100) == 0)
    {
        cout << 0;
        return 0;
    }
    else if((year % 4) == 0)
    {
        cout << 1;
        return 0;
    }
    else
    {
        cout << 0;
    }
    
    return 0;
}