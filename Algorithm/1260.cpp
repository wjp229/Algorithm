#include <complex.h>
#include <iostream>

using namespace std;

int sol1260()
{
    int pointNum, lineNum, startNum;

    cin >> pointNum >> lineNum >> startNum;

    bool** connect = new bool*[pointNum];
    for (int i = 0; i < pointNum; i++)
    {
        connect[i] = new bool[pointNum];
    }

    for (int i = 0; i < lineNum; i++)
    {
        int start, end;
        cin >> start >> end;
        connect[start-1][end-1] = true;
        connect[end-1][start-1] = true;
    }

    cout << "DFS\n";

    for (int i = 0; i < pointNum; i++)
    {
        for (int j = 0; j < pointNum; j++)
        {
            if (connect[i][j] == true)
                cout << connect[i][j];
        }
    }
    cout << "\n";

    cout << "BFS\n";
    cout << startNum << " ";
    while(true)
    {
        for(int i = 0; i < pointNum; i++)
        {
            if(connect[startNum-1][i])
            {
                cout << i << " ";
                continue;
            }
            
        }
    }
    cout << "\n";

    return 0;
}
