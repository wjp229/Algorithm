#include <iostream>
#include <vector>

using namespace std;

vector<vector<pair<int, int>>> Marbles;
int DFSMarbleLevel[100];
int VisitMarble[100];

int MinLevel = 99999999;
int MaxLevel = -99999999;

void CheckMarbleLevel(int CurPos, int DFS)
{
    if(VisitMarble[CurPos] == 1)
    {
        return;
    }

    VisitMarble[CurPos] = 1;
    DFSMarbleLevel[CurPos] = DFS;

    if(DFS < MinLevel)
    {
        MinLevel = DFS;
    }
    if(DFS > MaxLevel)
    {
        MaxLevel = DFS;
    }
    
    for(int i = 0; i < Marbles[CurPos].size(); i++)
    {
        if(Marbles[CurPos][i].second == 1 && VisitMarble[Marbles[CurPos][i].first] == 0)
        {
            CheckMarbleLevel(Marbles[CurPos][i].first, DFS+1);
        }

        if(Marbles[CurPos][i].second == -1 && VisitMarble[Marbles[CurPos][i].first] == 0)
        {
            CheckMarbleLevel(Marbles[CurPos][i].first, DFS-1);
        }
    }
}

int unsol2617()
{
    int N, M;

    cin >> N >> M;

    Marbles.resize(N+1);
    
    for(int i = 0; i < M; i++)
    {
        int S, E;
        cin >> S >> E;

        Marbles[S].push_back(make_pair(E, 1));
        Marbles[E].push_back(make_pair(S, -1));
    }

    CheckMarbleLevel(1, 0);
    //
     cout << "\n";
     cout  << MaxLevel << ", " << MinLevel;
    
    int Mid = (MaxLevel + MinLevel) / 2;
    int Cnt = 0;
    
    for(int i = 1; i <= N; i++)
    {
        cout << DFSMarbleLevel[i] <<" ";
        if(DFSMarbleLevel[i] != Mid)
            Cnt++;
    }

    cout << Cnt;
    
    return 0;
}
