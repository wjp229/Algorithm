#include <iostream>
#include <algorithm>

using namespace std;

int House[200000];

int unsol2110()
{
    int N, C;

    cin >> N >> C;

    for(int i = 0; i < N; i++)
    {
        cin >> House[i];
    }

    sort(House, House + N);

    int Low = 0, High = N-1;

    while(Low < High)
    {
    }
    
    return 0;
}

