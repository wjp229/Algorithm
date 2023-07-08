#include <iostream>

using namespace std;

int sol9020()
{
    int TestCase;

    cin >> TestCase;

    int* IsPrime = new int[10001];
    
    for(int i = 0; i < 10000; i++)
    {
        IsPrime[i] = 0;
    }

    IsPrime[0] = 1;
    IsPrime[1] = 1;
    
    for(int i = 2; i < 10000; i++)
    {
        for(int j = 2; i * j < 10000; j++)
        {
            IsPrime[i*j] = 1;
        }
    }
    
    for(int i = 0; i < TestCase; i++)
    {
        int Val;
        cin >> Val;

        for(int j = Val / 2; j < Val; j++)
        {
            if(IsPrime[j] == 0 && IsPrime[Val-j] == 0)
            {
                cout << Val - j << " " << j << endl;
                break;
            }
        }
    }
   
    return 0;
}
