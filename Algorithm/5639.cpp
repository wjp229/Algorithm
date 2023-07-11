#include <iostream>
#include <queue>
#include <string>

using namespace std;

int Node5639[1000000][2];
int MaxNode = 0;

void AddNode5639(int N, int AddNum)
{
    if(N > AddNum)
    {
        if(Node5639[N][1] == 0)
        {
            Node5639[N][1] = AddNum;
        }
        else
        {
            AddNode5639(Node5639[N][1], AddNum);
        }
    }
    else
    {
        if(Node5639[N][0] == 0)
        {
            Node5639[N][0] = AddNum;
        }
        else
        {
            AddNode5639(Node5639[N][0], AddNum);
        }
    }
}

void CheckNode5639(int N)
{
    
    if(Node5639[N][1] != 0)
    {
        CheckNode5639(Node5639[N][1]);
    }
    
    if(Node5639[N][0] != 0)
    {
        CheckNode5639(Node5639[N][0]);
    }

    cout << N << '\n';
}

int sol5639()
{
    int Input = 0;

    cin >> Input;

    int Root = Input;
    
    while (cin >> Input)
    {
        if(MaxNode < Input)
        {
            MaxNode = Input;
        }

        AddNode5639(Root, Input);

    }

    CheckNode5639(Root);

    return 0;
}
