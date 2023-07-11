#include <iostream>

using namespace std;

int ComputerConnected[101][101];
int Visited[101];

int computerNum, connectNum;

int CheckComputer(int N)
{
    if(Visited[N] == 1)
    {
        return 0;
    }

    Visited[N] = 1;

    int result = 1;
    
    for(int i = 1; i <= computerNum; i++)
    {
        if(ComputerConnected[N][i] == 1)
        {
            //result++;
            result += CheckComputer(i);
        }
    }
    
    return result;
}

int sol2606()
{
    
    cin >> computerNum >> connectNum;


    for(int i = 0; i < connectNum; i++)
    {
        int F, S;

        cin >> F >> S;

        ComputerConnected[F][S] = 1;
        ComputerConnected[S][F] = 1;
    }

    cout << CheckComputer(1) - 1;
    
    return 0;
}
