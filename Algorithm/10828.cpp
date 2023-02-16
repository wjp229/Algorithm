#include <iostream>
#include <string>

using namespace std;

int sol10828()
{
    int test;
    int arr[10000];

    int cnt = 0;
    
    cin >> test;

    for(int i = 0; i < test; i++)
    {
        string str;
        cin >> str;

        if(str.compare("push") == 0)
        {
            int num;
            cin >> num;

            arr[cnt++] = num;
        }
        else if(str.compare("top") == 0)
        {
            if(cnt <= 0 )
            {
                cout << "-1\n";
                continue;
            }
            
            cout << arr[cnt - 1] << "\n";
        }
        else if(str.compare("pop") == 0)
        {
            if(cnt <= 0)
            {
                cout << -1 << "\n";
                continue;
            }

            cout << arr[--cnt] << "\n";
        }
        else if(str.compare("size") == 0)
        {
            cout << cnt << "\n";
        }
        else if(str.compare("empty") == 0)
        {
            if(cnt == 0)
                cout << 1 << "\n";
            else
                cout << 0 << "\n";
        }
    }
    

    return 0;
}
