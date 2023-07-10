#include <iostream>
#include <queue>
#include <string>

using namespace std;

char Nodes[26][2];

void Preorder(int cur)
{
    cout <<(char)(cur + 'A');
    if(Nodes[cur][0] != -1) Preorder(Nodes[cur][0] - 'A');
    if(Nodes[cur][1] != -1) Preorder(Nodes[cur][1] - 'A');
}

void Inorder(int cur)
{
    if(Nodes[cur][0] != -1) Inorder(Nodes[cur][0] - 'A');
    cout <<(char)(cur + 'A');
    if(Nodes[cur][1] != -1) Inorder(Nodes[cur][1] - 'A');
}

void Postorder(int cur)
{
    if(Nodes[cur][0] != -1) Postorder(Nodes[cur][0] - 'A');
    if(Nodes[cur][1] != -1) Postorder(Nodes[cur][1] - 'A');
    cout <<(char)(cur + 'A');
}

int sol1991()
{
    int N;
    cin >> N;

    for(int i = 0; i < 26; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            Nodes[i][j] = -1;
        }
    }
    
    for(int i = 0; i < N; i++)
    {
        char CurNode;
        char LeftNode;
        char RightNode;

        cin >> CurNode >> LeftNode >> RightNode;
        
        if(LeftNode != '.') Nodes[CurNode - 'A'][0] = LeftNode;
        if(RightNode != '.') Nodes[CurNode - 'A'][1] = RightNode;
    }

    Preorder(0);
    cout <<"\n";
    Inorder(0);
    cout <<"\n";
    Postorder(0);

    return 0;
}
