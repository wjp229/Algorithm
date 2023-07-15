#include <iostream>
#include <queue>

using namespace std;

int Board[101][101];
int Apple[101][101];

int sol3109()
{
    queue<pair<int, int>> SnakeQueue;
    queue<pair<int, char>> DirQueue;

    int TimeCnt = 0;

    int N, K;
    
    cin >> N >> K;

    for(int i = 0; i < K; i++)
    {
        int x, y;
        cin >> x >> y;
        Apple[x][y] = 1;
    }

    int L;
    cin >> L;

    int DirY[4] = { 1, 0, -1, 0};
    int DirX[4] = { 0, 1, 0, -1};

    int CurDir = 0;
    
    for(int i = 0; i < L; i++)
    {
        int Time;
        char Dir;

        cin >> Time >> Dir;

        DirQueue.push(make_pair(Time, Dir));
    }
    
    SnakeQueue.push(make_pair(1,1));
    Board[1][1] = 1;

    int HX = 1, HY = 1;
    
    while(true)
    {
        TimeCnt++;
        
        // 1. Move Snake to Direction
        HX += DirX[CurDir];
        HY += DirY[CurDir];
        
        //cout << "Move To " << HX << ", " << HY << '\n';

        if(HX <= 0 || HX > N || HY <= 0 || HY > N)
        {
            //cout << "SnakeSize " << SnakeQueue.size() << '\n';
            break;
        }
        if(Board[HX][HY] == 1)
        {
           // cout << "Collide On Body\n";
            break;
        }

        if(Apple[HX][HY] == 1)
        {
            //cout << "Eat Apple!!\n";
            Apple[HX][HY] = 0;
        }
        else
        {
            int RemoveX, RemoveY;
            RemoveX = SnakeQueue.front().first;
            RemoveY = SnakeQueue.front().second;
            Board[RemoveX][RemoveY] = 0;
            SnakeQueue.pop();
        }

        SnakeQueue.push(make_pair(HX, HY));
        Board[HX][HY] = 1;
        
        if(!DirQueue.empty() && DirQueue.front().first == TimeCnt)
        {
            if(DirQueue.front().second == 'D')
                CurDir++;
            else if(DirQueue.front().second == 'L')
                CurDir--;

            DirQueue.pop();
            
            if(CurDir >= 4)
                CurDir = 0;
            if(CurDir < 0)
                CurDir = 3;
        }
    }

    cout << TimeCnt;
    
    return 0;
}
