#include <iostream>
#include <queue>

using namespace std;

int Room[51][51];
int DistRoom[51][51];
int VisitRoom[51][51];

int DxRoom[4] = { -1, 1, 0, 0};
int DyRoom[4] = { 0, 0, -1, 1};

int main()
{
    int N;
    cin >> N;
    
    for(int i = 1; i <= N; i++)
    {
        for(int j = 1; j <= N; j++)
        {
            char OneRoom;
            cin >> OneRoom;
            OneRoom -= '0';

            Room[i][j] = OneRoom;
        }
    }

    queue<pair<int, int>> RoomQueue;
    RoomQueue.push(make_pair(1,1));

    while(!RoomQueue.empty())
    {
        int x = RoomQueue.front().first;
        int y = RoomQueue.front().second;

        RoomQueue.pop();

        for(int i = 0; i < 4; i++)
        {
            int nx = x + DxRoom[i];
            int ny = y + DyRoom[i];

            int add = 0;

            if(nx >= 1 && nx <= N && ny >= 1 && ny <= N)
            {
                if(Room[nx][ny] == 0)
                {
                    add = 1;
                }

                if(VisitRoom[nx][ny] != 1)
                {
                    RoomQueue.push(make_pair(nx, ny));
                    VisitRoom[nx][ny] = 1;
                    DistRoom[nx][ny] = DistRoom[x][y] + add;
                }
                else if(DistRoom[nx][ny] > DistRoom[x][y] + add)
                {
                    RoomQueue.push(make_pair(nx, ny));

                    DistRoom[nx][ny] = DistRoom[x][y] + add;
                }
            }
        }
    }

    // cout <<"===================\n";
    //
    // for(int i = 1; i <= N; i++)
    // {
    //     for(int j = 1; j <= N; j++)
    //     {
    //         cout << DistRoom[i][j];
    //     }
    //     cout <<"\n";
    // }

    cout << DistRoom[N][N];
    
    return 0;
}
