#include <iostream>
#include <string>
#include <list>
#include <queue>
#include <stack>

using namespace std;

int MinMaze;
int TargetN, TargetM;
int Map[101][101];
int VisitMaze[101][101];
int Dist[101][101];
int dx[4] = { -1, 1, 0, 0};
int dy[4] = { 0, 0, -1, 1};

void FindMaze(int x, int y)
{
    // Check Visit
    VisitMaze[x][y] = 1;
    
    queue<pair<int, int>> MazeQueue;
    MazeQueue.push(make_pair(x, y));
    VisitMaze[x][y] = 1;
    Dist[x][y] = 1;
    
    while (!MazeQueue.empty())
    {
        int CurCnt = VisitMaze[MazeQueue.front().first][MazeQueue.front().second];
        
        for(int ix = 0; ix < 4; ix++)
        {
            int Tx = MazeQueue.front().first + dx[ix];
            int Ty = MazeQueue.front().second + dy[ix];
            
            if((Tx > 0) && (Tx <= TargetM) && (Ty > 0) && (Ty <= TargetN) && VisitMaze[Tx][Ty] < 1 && Map[Tx][Ty] == 1)
            {
              
                VisitMaze[Tx][Ty] = CurCnt+1;
                MazeQueue.push(make_pair(Tx, Ty));
            }
        }

        MazeQueue.pop();
    }
    

    // If x and y is not Target Move to Next
}

int sol2178()
{

    cin >> TargetM >> TargetN;

    for(int i = 1; i <= TargetM; i++)
    {
        for(int j = 1; j <= TargetN; j++)
        {
            char Val;

            cin >> Val;

            Val -= '0';
            
            Map[i][j] = Val;
        }
    }

    FindMaze(1, 1);

    cout << VisitMaze[TargetM][TargetN];
    
    return 0;
}
