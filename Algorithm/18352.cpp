#include <iostream>
#include <queue>
#include <string>

using namespace std;


int main()
{
    int N, M;

    int StartX;
    int EndK;

    cin >> N >> M >> EndK >> StartX;
    
    int** CityN = new int*[N+1];
    
    for(int i = 0; i <= N; i++)
    {
        CityN[i] = new int[N+1];

        for(int j = 0; j <= N; j++)
        {
            CityN[i][j] = 0;
        }
    }

    for(int i = 0; i < M; i++)
    {
        int S, E;

        cin >> S >> E;
        
        CityN[S][E] = 1;
    }
    
    queue<int> CurNum;

    int* Visited = new int[N+1];
    
    int DistCnt = 0;

    CurNum.push(StartX);
    Visited[StartX] = DistCnt;
    
    while (!CurNum.empty())
    {
        int Head = CurNum.front();
        CurNum.pop();
        DistCnt++;
        
        for(int i = 1; i <= N; i++)
        {
            if(Visited[i] < 1 && CityN[Head][i] == 1)
            {
                Visited[i] = DistCnt;
                
                CurNum.push(i);
            }
        }
        
    }

    bool bHasVisited = false;

    for(int i = 1; i <= N; i++)
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
