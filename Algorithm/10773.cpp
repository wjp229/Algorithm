#include <iostream>

using namespace std;

int sol10773()
{
    int k;
    int cnt = 0;

    int arr[100000];
    
    cin >> k;

    for(int i = 0; i < k; i++)
    {
        int num;
        cin >> num;

        if(num == 0)
        {
            arr[cnt--] = 0;
        }
        else
        {
            arr[cnt++] = num;
        }
    }

    int sum = 0;
    for(int i = 0; i < cnt; i++)
    {
        sum += arr[i];
    }

    cout << sum;
    return 0;
}
