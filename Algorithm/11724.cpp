#include <iostream>

using namespace std;

int Dot[1001][1001];
int Visit[1000];

int Component = 0;

void VisitDot(int N, int Total)
{
    Visit[N] = 1;

    for(int i = 1; i <= Total; i++)
    {
        if(Visit[i] != 1 && Dot[N][i] == 1)
        {
            VisitDot(i, Total);
        }
    }
}

int sol11724()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;

    cin >> N >> M;
    
    for(int i = 0; i < M; i++)
    {
        int F, S;

        cin >> F >> S;

        Dot[F][S] = 1;
        Dot[S][F] = 1;
    }

    
        for(int i = 1; i <= N; i++)
        {
            if(Visit[i] != 1)
            {
                Component++;
                VisitDot(i, N);
            }
        }
    

    cout << Component;
    
    return 0;
}
