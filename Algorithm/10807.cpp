#include <iostream>

using namespace std;

int sol10807()
{
    int num;
    cin >> num;

    int * nums = new int[num];

    for (int i = 0; i < num; i++)
    {
        cin >> nums[i];  
    }

    int v;
    cin >>v;

    int cnt = 0;
    for (int i = 0; i < num; i++)
    {
        if(v==nums[i])
            cnt++;  
    }

    cout << cnt;
    
    return 0;
}
