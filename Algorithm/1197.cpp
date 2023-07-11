#include <iostream>
#include <list>
#include <queue>
#include <string>

using namespace std;

int STree[10000][10000];

int CheckSTree(int N, int Cnt, int Point)
{
 return 0;   
}

int unsol1197()
{
    int Point, Line;

    cin >> Point >> Line;

    for(int i = 0; i < Line; i++)
    {
        int S, E, V;

        cin >> S >> E >> V;

        STree[S][E] = V;
        STree[E][S] = V;
    }

    
  
    return 0;
}
