#include <iostream>
#include <queue>

using namespace std;

int BFSDFSNode[1001][1001];
int VisitBFSDFS[1001];

queue<int> BFSQueue;

void ClearVisit(int N)
{
    for(int i = 1; i <= N; i++)
    {
        VisitBFSDFS[i] = 0;
    }
}

void CheckBFS(int N, int Total)
{
    BFSQueue.push(N);
    VisitBFSDFS[N] = 1;

    while(!BFSQueue.empty())
    {
        int H = BFSQueue.front();
        BFSQueue.pop();
        
        for(int i = 1; i <= Total; i++)
        {
            if(VisitBFSDFS[i] != 1 && BFSDFSNode[i][H] == 1)
            {
                VisitBFSDFS[i] = 1;
                BFSQueue.push(i);
            }
        }

        cout << H << " ";
    }
}

void CheckDFS(int N, int Total)
{
    cout << N <<" ";

    VisitBFSDFS[N] = 1;
    
    for(int i = 1; i <= Total; i++)
    {
        if(VisitBFSDFS[i] != 1 && BFSDFSNode[N][i] == 1)
        {
            CheckDFS(i, Total);
        }
    }
}

int sol1260()
{
    int N, M, V;

    cin >> N >> M >> V;

    for(int i = 0; i < M; i++)
    {
        int F, S;

        cin >> F >> S;

        BFSDFSNode[F][S] = 1;
        BFSDFSNode[S][F] = 1;
    }

    ClearVisit(N);

    CheckDFS(V, N);
    
    cout << "\n";
    
    ClearVisit(N);

    CheckBFS(V, N);

    return 0;
}
