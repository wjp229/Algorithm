#include <iostream>

using namespace std;

int sol2562()
{
    int max = 0;
    int idx = 0;
    
    for(int i = 0; i < 9; i++)
    {
        int num;
        cin >> num;

        if (num > max)
        {
            max = num;
            idx = i + 1;
        }
    }

    cout << max << endl << idx;


    return 0;
}
