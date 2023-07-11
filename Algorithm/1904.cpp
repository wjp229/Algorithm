#include <iostream>

using namespace std;

long long CCoin[1000001];

// int CheckCoin(int N)
// {
//     
//
//     return CCoin[N] % 15746;
// }

int sol1904()
{
    int N;

    cin >> N;

    CCoin[1] = 1;
    CCoin[2] = 2;

    for(int i = 3; i <= N; i++)
    {
        CCoin[i] = (CCoin[i-1] + CCoin[i-2])  % 15746;
    }

    cout << CCoin[N];

    
    return 0;
}
