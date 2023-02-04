#include <iostream>

using namespace std;

int notsolved()
{
    int min, max;

    cin >> min >> max;

    bool arr[1000000];
    arr[1] = false;
    
    for(int i = 2; i <= max; i++)
    {
       if(arr[i])
        {
            for(int j = i * i; j <= max + 1; j += i)
            {
                arr[j] = false;
            }
        }
    }

    for(int i = min; i <= max; i++)
    {
        if(arr[i])
            cout << i <<"\n";
    }

    return 0;
}
