#include <iostream>
#include <algorithm>

using namespace std;

int Water[100000];

int unsol2470()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int N;

    cin >> N;

    for(int i = 0; i < N; i++)
    {
        cin >> Water[i];
    }

    sort(Water, Water+N);

    int Low = 0, High = N-1;

    while(Low < High)
    {
        
    }
    
    return 0;
}

