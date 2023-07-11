#include <algorithm>
#include <iostream>
#include <string>
#include <list>
#include <queue>

using namespace std;


int main()
{
    int N, M;
    int Map[101][101] = { };
    int Line[100][100] = { };

    cin >> N >> M;

    for(int i = 1; i <= N; i++)
    {
        for(int j = 1; j <= M; j++)
        {
            char Val;

            cin >> Val;

            Val -= '0';
            
            Map[i][j] = Val;

        }
    }

    for(int i = 1; i <= N; i++)
    {
        for(int j = 1; j <= M; j++)
        {
            cout << Map[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}
