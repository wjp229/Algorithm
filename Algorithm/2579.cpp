#include <iostream>

using namespace std;

int Max(int a, int b) { return a > b ? a : b; }

int sol2579()
{
    int num = 0;

    cin >> num;

    int stairs[301];
    int res[301];

    for (int i = 0; i < num; i++)
    {
        cin >> stairs[i];
    }

    res[0] = stairs[0];
    res[1] = stairs[1];
    res[2] = Max(stairs[0] + stairs[2], stairs[1] + stairs[2]);

    for (int i = 3; i < num; i++)
    {
        res[i] = Max(res[i-2], stairs[i-1] + res[i-1])+stairs[i];
    }

    cout << res[num - 1] << endl;

    return 0;
}
