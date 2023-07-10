#include <iostream>
#include <queue>
#include <string>

using namespace std;

int sol18258()
{
    // cin.tie(nullptr);
    // ios::sync_with_stdio(false); 
    
    int TestCase = 0;
    cin >> TestCase;

    int que[2000000];
    int head = 0;
    int tail = 0;


    for (int i = 0; i < TestCase; i++)
    {
        string instruction;

        cin >> instruction;

        if (instruction == "push")
        {
            int res = 0;
            cin >> res;
            que[tail] = res;
            tail++;
        }
        
        if (instruction == "pop")
        {
            if (tail - head == 0)
            {
                cout << -1 << "\n";
            }
            else
            {
                cout << que[head] << "\n";
                head++;
            }
        }
        if (instruction == "size")
        {
            cout << tail - head  << "\n";
        }
        if (instruction == "empty")
        {
            if (tail - head == 0)
            {
                cout << 1 << "\n";
            }
            else
            {
                cout << 0  << "\n";
            }
        }
        if (instruction == "front")
        {
            if (tail - head == 0)
            {
                cout << -1  << "\n";
            }
            else
            {
                cout << que[head]  << "\n";
            }
        }
        if (instruction == "back")
        {
            if (tail - head == 0)
            {
                cout << -1  << "\n";
            }
            else
            {
                cout << que[tail-1]  << "\n";
            }
        }
    }

    return 0;
}
