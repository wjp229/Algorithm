#include <iostream>
#include <queue>

using namespace std;

int TomatoN, TomatoM, TomatoH;
int TomatoBox[101][101][101];
int VisitedTomato[101][101][101];

int MoveX[6] = {-1, 1, 0, 0, 0, 0};
int MoveY[6] = {0, 0, 0, 0, -1, 1};
int MoveZ[6] = {0, 0, -1, 1, 0, 0};

typedef struct
{
    int x, y, z;
    int cnt;
} TomatoType;

int sol7569()
{
    int cnt = 0;

    cin >> TomatoN >> TomatoM >> TomatoH;

    queue<TomatoType> RipedQueue;

    for (int kx = 0; kx < TomatoH; kx++)
    {
        for (int ix = 0; ix < TomatoM; ix++)
        {
            for (int jx = 0; jx < TomatoN; jx++)
            {
                cin >> TomatoBox[ix][jx][kx];

                if (TomatoBox[ix][jx][kx] == 1)
                {
                    VisitedTomato[ix][jx][kx] = 1;
                    RipedQueue.push({ix, jx, kx, 0});
                }
                else if (TomatoBox[ix][jx][kx] == -1)
                {
                    VisitedTomato[ix][jx][kx] = 1;
                }
            }
        }
    }
    while (!RipedQueue.empty())
    {
        TomatoType Head = RipedQueue.front();
        RipedQueue.pop();
        cnt = max(Head.cnt, cnt);

        for (int i = 0; i < 6; i++)
        {
            int nx = Head.x + MoveX[i];
            int ny = Head.y + MoveY[i];
            int nz = Head.z + MoveZ[i];
            
            if (nx >= 0 && ny >= 0 && nz >= 0 && nx < TomatoM && ny < TomatoN && nz < TomatoH && VisitedTomato[nx][ny][
                nz] == 0)
            {
                RipedQueue.push({nx, ny, nz, Head.cnt + 1});
                VisitedTomato[nx][ny][nz] = 1;
            }
        }
    }

    for (int kx = 0; kx < TomatoH; kx++)
    {
        for (int ix = 0; ix < TomatoM; ix++)
        {
            for (int jx = 0; jx < TomatoN; jx++)
            {
                if (VisitedTomato[ix][jx][kx] != 1)
                {
                    cout << -1;
                    return 0;
                }
            }
        }
    }

    cout << cnt;

    return 0;
}
