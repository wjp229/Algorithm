#include <iostream>

using namespace std;

int W[101];
int V[101];

int unsol12865()
{
    int N, K;

    cin >> N >> K;
    
    for(int i = 1; i <= N; i++)
    {
        cin >> W[i] >> V[i];
    }

    int Dp[100000] = { };

    int CurCnt = 2;

    Dp[1] = 0;

    int MaxValue = 0;
    
    while(CurCnt <= N)
    {
        
    }
    return 0;
}