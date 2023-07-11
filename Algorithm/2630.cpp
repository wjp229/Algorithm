#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int WhitePaper = 0;
int BluePaper = 0;

void CheckPaper(int** Paper, int n, int x, int y)
{
    if(n == 1)
    {
        if(Paper[x][y] ==1)
        {
            BluePaper++;
            return;
        }
        else if(Paper[x][y] == 0)
        {
            WhitePaper++;
            return;
        }
    }
    
    bool IsBlue = true;
    bool IsWhite = true;

    for(int i = x; i < x+n; i++)
    {
        for(int j = y; j < y+n; j++)
        {
            if(Paper[i][j] == 0) IsBlue = false;
            else IsWhite = false;

        }
        if(!IsWhite && !IsBlue)
        {
            break;
        }
    }

    if(IsBlue)
    {
        BluePaper++;
    }
    else if(IsWhite)
    {
        WhitePaper++;
    }else
    {
        CheckPaper(Paper, n/2, x, y);
        CheckPaper(Paper, n/2, x + n/2, y);
        CheckPaper(Paper, n/2, x, y + n/2);
        CheckPaper(Paper, n/2, x + n/2, y + n/2);
    }
}

int sol2630()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int N;

    cin >> N;

    int** Paper = new int*[N];

    for (int i = 0; i < N; i++)
    {
        Paper[i] = new int[N];
        
        for (int j = 0; j < N; j++)
        {
            cin >> Paper[i][j];
        }
    }
    
    CheckPaper(Paper, N, 0, 0);

   cout << WhitePaper << "\n"; 
   cout << BluePaper << "\n"; 

    return 0;
}
