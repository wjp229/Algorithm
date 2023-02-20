#include <iostream>
#include <string>

using namespace std;

void QuadTree(int n, int y, int x, int ** arr)
{
    if(n == 1)
    {
        cout << arr[y][x];
        return;
    }

    bool blank = true;
    bool filled = true;

    for(int i = y; i < n + y; i++)
    {
        for(int j = x; j < x+ n; j++)
        {
           // cout << arr[y][x] << "/ ";
            if(arr[i][j] == 1)
            {
                blank = false;
            }
            else if(arr[i][j] == 0)
            {
                filled = false;
            }

            if(!blank && !filled)
            {
                break;
            }
        }
    }

    if(blank)
    {
        cout << 0;
    }
    else if(filled)
    {
        cout << 1;
    }
    else
    {
        cout << "(";
        QuadTree(n/2, y, x, arr);
        QuadTree(n/2, y, x + n/2, arr);
        QuadTree(n/2, y + n/2, x, arr);
        QuadTree(n/2, y + n/2, x + n/2, arr);
        cout << ")";
    }
    return;
}

int sol1992()
{
    int n;
    cin >> n;

    int ** arr = new int*[n];
    for(int i = 0; i < n; i++)
    {
        arr[i] = new int[n];
    }

    string s;

    for(int i = 0; i < n; i++)
    {
        cin >> s;
        for(int j = 0; j < n; j++)
        {
            arr[i][j] = s[j] -'0';
        }
    }

    QuadTree(n, 0, 0, arr);

    return 0;
}
