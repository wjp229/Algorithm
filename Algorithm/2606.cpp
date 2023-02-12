#include <iostream>

using namespace std;

struct Computer
{
    int connectCnt = 0;
    int * connected;
    
};

int ConnectCheck(const Computer * connect)
{
    int connectCount = 0;
    
    
   return 0; 
}

int sol2606()
{
    int computerNum, connectNum;
    
    cin >> computerNum >> connectNum;

    Computer * computer = new Computer[computerNum];
    computer->connected = new int[connectNum];
    
    for(int i = 0; i < connectNum; i++)
    {
        int x, y;
        cin >> x >> y;

        computer[x].connected[computer[x].connectCnt++] = y;
        computer[y].connected[computer[y].connectCnt++] = x;
    }

    
    
    return 0;
}
