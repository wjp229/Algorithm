#include <iostream>
#include <queue>
#include <string>

using namespace std;


int unsol18352()
{
    int N, M;

    int StartX;
    int EndK;

    cin >> N >> M >> EndK >> StartX;
    
    int** CityN = new int*[N];
    
    for(int i = 0; i < N; i++)
    {
        CityN[i] = new int[N];

        for(int j = 0; j < N; j++)
        {
            CityN[i][j] = 0;
        }
    }

    for(int i = 0; i < M; i++)
    {
        int S, E;

        cin >> S >> E;
        
        CityN[S-1][E-1] = 1;
    }
    
    queue<int> CurNum;

    int* Visited = new int[N];
    
    int DistCnt = 0;

    CurNum.push(StartX);
    Visited[StartX] = DistCnt;
    
    while (!CurNum.empty())
    {
        int Head = CurNum.front();
        CurNum.pop();
        DistCnt++;
        
        for(int i = 0; i < N; i++)
        {
            if(Visited[i] < 1 && CityN[Head-1][i] == 1)
            {
                Visited[i] = Visited[Head-1] + 1;
                
                CurNum.push(i);
            }
        }
        
    }

    bool bHasVisited = false;

    for(int i = 0; i < N; i++)
    {
        if(Visited[i] == EndK)
        {
            cout << i << '\n';
            bHasVisited = true;
        }
    }
    if(!bHasVisited)
        cout << -1 << '\n';

    return 0;
}
