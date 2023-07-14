#include <algorithm>
#include <iostream>
#include <string>
#include <list>
#include <queue>

using namespace std;

int MinMaze;
int TargetN, TargetM;
int VisitMaze[101][101];
int Dist[101][101];

void FindMaze(int** Map, int x, int y)
{
    // Check Visit
    VisitMaze[x][y] = 1;
    
    // Check if x and y is Target
    if(TargetN == x && TargetM == y)
    {
        MinMaze++;

        return;
    }

    queue<pair<int, int>> MazeQueue;
    MazeQueue.push(make_pair(x, y));
    Dist[x][y] = 1;

    while (!MazeQueue.empty())
    {
        int Tx = MazeQueue.front().first;
        int Ty = MazeQueue.front().second;

        MazeQueue.pop();

        //if()
    }
    

    // If x and y is not Target Move to Next
}

int unsol2178()
{
    int** Map = new int*[TargetN+1];

    cin >> TargetN >> TargetM;

    for(int i = 1; i <= TargetN; i++)
    {
        Map[i] = new int[TargetM+1];
        for(int j = 1; j <= TargetM; j++)
        {
            char Val;

            cin >> Val;

            Val -= '0';
            
            Map[i][j] = Val;
        }
    }

    for(int i = 1; i <= TargetN; i++)
    {
        for(int j = 1; j <= TargetM; j++)
        {
            cout << Map[i][j] << " ";
        }
        cout << "\n";
    }

    FindMaze(Map, 1, 1);
    
    return 0;
}
