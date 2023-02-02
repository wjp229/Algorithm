#include <iostream>

using namespace std;

int sol10818()
{
    int num;
    cin >> num;

    int tmp = 0;
    int max = -100000000, min = 100000000;

    for (int i = 0; i < num; i++)
    {
        cin >> tmp;
        if (tmp > max)
            max = tmp;

        if (tmp < min)
            min = tmp;
    }

    cout << min <<" " << max;

    return 0;
}
