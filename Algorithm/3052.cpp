#include <iostream>

using namespace std;

int sol3052()
{
    bool arr[42] = {false};
    int cnt = 0;
    
    
    for(int i = 0; i < 10; i++)
    {
        int num;
        cin >> num;

        num %= 42;
        
        if(!arr[num])
        {
            cnt++;
            arr[num] = true;
        }
    }

   cout << cnt;
    
    return 0;
}