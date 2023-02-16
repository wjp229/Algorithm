#include <iostream>
#include <string>

using namespace std;

int sol10845()
{
    int test;
    int arr[10000];

    int tail = 0, head = 0;
    
    cin >> test;

    for(int i = 0; i < test; i++)
    {
        string str;
        cin >> str;

        if(str.compare("push") == 0)
        {
            int num;
            cin >> num;

            arr[tail++] = num;
        }
        else if(str.compare("front") == 0)
        {
            if(tail <= head)
            {
                cout << "-1\n";
                continue;
            }
            
            cout << arr[head] << "\n";
        }
        else if(str.compare("back") == 0)
        {
            if(tail <= head)
            {
                cout << "-1\n";
                continue;
            }
            
            cout << arr[tail - 1] << "\n";
        }
        else if(str.compare("pop") == 0)
        {
            if(tail <= head)
            {
                cout << -1 << "\n";
                continue;
            }

            cout << arr[head++] << "\n";
        }
        else if(str.compare("size") == 0)
        {
            cout << tail - head << "\n";
        }
        else if(str.compare("empty") == 0)
        {
            if(head == tail)
                cout << 1 << "\n";
            else
                cout << 0 << "\n";
        }
    }

    return 0;
}
