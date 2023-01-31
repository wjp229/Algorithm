#include <iostream>

using namespace std;

int sol2525()
{
    int curH, curM;

    int spendM;

    cin >> curH;
    cin >> curM;

    cin >> spendM;

    curH += (spendM / 60);
    curM += (spendM % 60);

    if (curM >= 60)
    {
        curH += (curM / 60);
        curM %= 60;
    }

    curH %= 24;

    cout << curH << " " << curM;

    return 0;
}
