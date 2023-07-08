#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main()
{
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
                cout << -1 << endl;
            }
            else
            {
                cout << que[head] << endl;
                head++;
            }
        }
        if (instruction == "size")
        {
            cout << tail - head << endl;
        }
        if (instruction == "empty")
        {
            if (tail - head == 0)
            {
                cout << 1 << endl;
            }
            else
            {
                cout << 0 << endl;
            }
        }
        if (instruction == "front")
        {
            if (tail - head == 0)
            {
                cout << -1 << endl;
            }
            else
            {
                cout << que[head] << endl;
            }
        }
        if (instruction == "back")
        {
            if (tail - head == 0)
            {
                cout << -1 << endl;
            }
            else
            {
                cout << que[tail-1] << endl;
            }
        }
    }

    return 0;
}
